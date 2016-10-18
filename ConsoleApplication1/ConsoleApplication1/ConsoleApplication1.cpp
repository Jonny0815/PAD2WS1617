#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
 {

	vector<int> v1(3, 1);
	vector<int> v2(3, -1);

	v2.push_back(3);
	v2.pop_back();



	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << "index " << i << "=> " << v2[i] << endl;
	}
	
	cout << "Empty => " << v2.empty() << endl;
	cout << "Max_Size => " << v2.max_size() << endl;
	cout << "Size => " << v2.size() << endl;



	v2.insert(v2.end(), v1.begin(), v1.end());



	cout << "----------------------------" << endl;
	for (size_t i = 0; i < v2.size(); i++)
	{
		cout << "index " << i << "=> " << v2[i] << endl;
	}

	cout << "Empty => " << v2.empty() << endl;
	cout << "Max_Size => " << v2.max_size() << endl;
	cout << "Size => " << v2.size() << endl;


	return 0;



}