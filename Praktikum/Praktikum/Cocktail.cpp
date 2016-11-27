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