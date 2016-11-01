#include "stdafx.h"
#include "Cocktail.h"

using namespace std;

void Cocktail::set_name(string nam_h) {

	name = nam_h;

}

void Cocktail::set_ingredients(vector<Ingredient> vinc) {

	ingredients = vinc;

}

string Cocktail::get_name() {


	return name;


}

vector<Ingredient> Cocktail::get_ingredients() {

	return ingredients;

}

void Cocktail::print() {

	int ms;

	cout << "== Cocktail ==" << endl;
	cout << name << endl;
	
	for (size_t i = 0; i < ingredients.size(); i++)
	{
		cout << "=> " << ingredients.at(i).get_name() << endl;
	}

	cout << "0 - Exit" << endl;
	cin >> ms;
}


void Cocktail::push_ingredient(Ingredient ing_h) {

	ingredients.push_back(ing_h);

}