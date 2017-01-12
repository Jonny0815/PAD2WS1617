#ifndef Ingredient_h
#define Ingredient_h
#include "stdafx.h"


using namespace std;



class Ingredient 
{



public:
	
	string get_name();
	void set_name(string);
	int get_dispensing();
	void set_dispensing(int);



private:

	string name;
	int dispensing = 0;
	
};

#endif