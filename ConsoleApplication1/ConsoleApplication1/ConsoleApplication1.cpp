#include "stdafx.h"
#include <atlbase.h>
#include "xmllite.h"
#include <strsafe.h>

int _tmain(int argc, _TCHAR* argv[])
{
	HRESULT hr;
	CComPtr<IStream> pFileStream;
	CComPtr<IXmlReader> pReader;
	XmlNodeType nodeType;
	const WCHAR* pName;
	const WCHAR* pValue;


	//Open XML document
	if (FAILED(hr = SHCreateStreamOnFile(L"config.xml",
		STGM_READ, &pFileStream)))
	{
		wprintf(L"Error opening XML document, error %08.8lx", hr);
		return -1;
	}

	if (FAILED(hr = CreateXmlReader(__uuidof(IXmlReader),
		(void**)&pReader, NULL)))
	{
		wprintf(L"Error creating XmlReader, error %08.8lx", hr);
		return -1;
	}

	if (FAILED(hr = pReader->SetInput(pFileStream)))
	{
		wprintf(L"Error setting input for XmlReader, error %08.8lx", hr);
		return -1;
	}

	while (S_OK == (hr = pReader->Read(&nodeType)))
	{
		switch (nodeType)
		{
		case XmlNodeType_Element:
			if (FAILED(hr = pReader->GetQualifiedName(&pName, NULL)))
			{
				wprintf(L"Error reading element name, error %08.8lx", hr);
				return -1;
			}
			if (wcscmp(pName, L"key") == 0)
			{
				if (SUCCEEDED(hr =
					pReader->MoveToAttributeByName(L"name", NULL)))
				{
					if (FAILED(hr = pReader->GetValue(&pValue, NULL)))
					{
						wprintf(L"Error reading attribute value, error %08.8lx", hr);
						return -1;
					}
					if (wcscmp(pValue, L"foo") == 0)
					{
						//That's an element we are looking for
						if (FAILED(hr =
							pReader->MoveToAttributeByName(L"value", NULL)))
						{
							wprintf(L"Error reading attribute \"value\", error %08.8lx", hr);
							return -1;
						}
						if (FAILED(hr = pReader->GetValue(&pValue, NULL)))
						{
							wprintf(L"Error reading attribute value, error %08.8lx", hr);
							return -1;
						}
						wprintf(L"Key \"foo\"'s value is \"%s\"", pValue);
					}
				}
			}
			break;
		}
	}
	return 0;
}
