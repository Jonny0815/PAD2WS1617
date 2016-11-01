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

