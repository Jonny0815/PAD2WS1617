#include<iostream>;
#include <vector>;
#include <fstream>;
#include <string>;


using namespace std;


class Test { // The object to be serialized / deserialized
public:

	vector<string> stv;

	
};

void write(const std::string& file_name, Test& data) // Writes the given OBJECT data to the given file name.
{
	ofstream out;
	out.open(file_name, std::ios::binary);
	out.write(reinterpret_cast<char*>(&data), sizeof(Test));
	out.close();
};

void read(const std::string& file_name, Test& data) // Reads the given file and assigns the data to the given OBJECT.
{
	ifstream in;
	in.open(file_name, std::ios::binary);
	in.read(reinterpret_cast<char*>(&data), sizeof(Test));
	in.close();
};

int main() {

	cout << "test" << endl;

	Test t1;
	string s1 = "s1";
	string s2 = "s2";
	string s3 = "s3";

	t1.stv.push_back(s1);
	t1.stv.push_back(s2);
	t1.stv.push_back(s3);


	write("file.bin", t1);

	Test t2;

	read("file.bin", t2);

	cout << t2.stv.at(0) << endl;
	cout << t2.stv.at(1) << endl;
	cout << t2.stv.at(2) << endl;

	system("pause");



}