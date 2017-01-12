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


	vector<int> found;

	for (size_t i = 0; i < ingredients.size(); i++)
	{
		found.push_back(0);
	}

	for (size_t i = 0; i < dispensers.size(); i++)
	{
		for (size_t j = 0; j < ingredients.size(); j++)
		{
			if (dispensers.at(i)->get_ingredient() == ingredients.at(j))
			{
				found.at(j)++;
			}
		}
	}


	for (size_t i = 0; i < ingredients.size(); i++)
	{
		if (found.at(i) == 0)
		{
			return false;
		}
	}
	return true;


}



void Cocktail::ingr_out(Ingredient* ingr, float amount) {

	for (size_t i = 0; i < ingredients.size(); i++)
	{
		if (ingredients.at(i) == ingr)
		{
			amountout.at(i) = amountout.at(i) + amount;
		}
	}



}

vector<float> Cocktail::get_amountout() {


	if (amountout.size() == 0)
	{
		for (size_t i = 0; i < ingredients.size(); i++)
		{
			amountout.push_back(0);
		}
	}

	return amountout;

}

void Cocktail::cleanup() {

	amountout.clear();

}