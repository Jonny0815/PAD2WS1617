#include "stdafx.h"
#include "Star.h"
#include <iostream>

using namespace std;

void Star::print() {

	cout << "\"" << name << "\"" << "(" << spec << ") @ ";
	pos.print();

}


Star::Star()
{
	name = "Unbekannt";
	spec = 'X';

}


Star::Star(std::string n, Vec3D v, char s)
{
	name = n;
	pos = v;
	spec = s;

}

Star::~Star()
{
}
