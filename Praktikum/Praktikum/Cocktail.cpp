#include "stdafx.h"
#include "Cocktail.h"

using namespace std;



string Cocktail::get_name() {


	return name;


}

vector<Ingredient*> Cocktail::get_ingredients() {

	return ingredients;

}


void Cocktail::push_ingredient(Ingredient* ing_h) {

	ingredients.push_back(ing_h);

}

void Cocktail::push_amount(float f_h) {

	amount.push_back(f_h);

}

vector<float> Cocktail::get_amount() {

	return amount;

}

void Cocktail::set_name(string name_h) {

	name = name_h;

}

bool Cocktail::check_disp(vector<Dispenser*> dispensers) {


	int ingr_found = 0;

	for (size_t i = 0; i < ingredients.size(); i++)
	{
		for (size_t j = 0; j < dispensers.size(); j++)
		{
			if (ingredients.at(i) == dispensers.at(j)->get_ingredient()) {

				ingr_found++;

			}
		}
		
	}

	if (ingr_found == ingredients.size())
	{
		return true;
	}


}