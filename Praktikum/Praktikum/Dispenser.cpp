#include "stdafx.h"
#include "Dispenser.h"


using namespace std;

void Dispenser::set_ingredient(Ingredient* ing_h) {

	ingredient = ing_h;

}

void Dispenser::set_number(int num_h) {

	number = num_h;

}

unsigned int Dispenser::get_number() {

	return number;

}

Ingredient* Dispenser::get_ingredient() {

	return ingredient;
}

bool Dispenser::dispenser_active(Ingredient* ing, int amt, int amt_a) {

	if (ingredient == ing)
	{
		if (amt < amt_a)
		{
			cout << "ON  | ";
			return true;
		}
		else {

			cout << "OFF | ";
				return false;

		}
	}
	else {

		cout << "OFF | ";
		return false;
	}



}