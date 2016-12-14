#ifndef Dispenser_h
#define Dispenser_h
#include "Ingredient.h"

class Dispenser
{
	
	
public:

	//setter
	void set_number(int);
	void set_ingredient(Ingredient*);
	void set_active(bool);

	//getter
	unsigned int get_number();
	Ingredient* get_ingredient();
	bool get_active();

	
	

private:

	unsigned int number = 0;
	Ingredient* ingredient = NULL;
	bool active = false;
	
};

#endif