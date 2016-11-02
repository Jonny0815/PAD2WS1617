#ifndef Ingredient_h
#define Ingredient_h
#include "stdafx.h"


using namespace std;

class Ingredient 
{
public:
	
	string get_name();
	void set_name(string);

private:

	string name;
	
};

#endif