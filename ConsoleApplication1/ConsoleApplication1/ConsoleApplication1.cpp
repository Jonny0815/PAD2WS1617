#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


void load();
void save();

int main()
{
	

	fstream file("anil.bin", ios::binary | ios::in | ios::out | ios::trunc);

	if (!file.is_open()) {
		cout << "error while opening the file";
	}
	else {
		int length = strlen(input);
		for (int counter = 0; counter <= length; counter++) {
			file.put(input[counter]);
		}
		file.seekg(0);
		char ch;

		while (file.good()) {
			file.get(ch);
			cout << ch;
		}
	}
	return 0;
}

void load() {







}


void save() {







}

