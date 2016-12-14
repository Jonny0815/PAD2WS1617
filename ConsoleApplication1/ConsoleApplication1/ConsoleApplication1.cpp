#include "inc\tinyxml.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{

	string s1 = "test";
	string s2 = "test";

	if (s1.c_str() == s2.c_str())
	{
		cout << "ok " << endl;
	}



	return 0;
}
