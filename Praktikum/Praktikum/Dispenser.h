#ifndef Dispenser_h
#define Dispenser_h
#include "Ingredient.h"

class Dispenser
{
	
	
public:

	//setter
	void set_number(int);
	void set_ingredient(Ingredient*);

	//getter
	unsigned int get_number();
	Ingredient* get_ingredient();

	//wörk
	bool dispenser_active(Ingredient*, int, int);
	

private:

	unsigned int number = 0;
	Ingredient* ingredient = NULL;
	
};

#endif