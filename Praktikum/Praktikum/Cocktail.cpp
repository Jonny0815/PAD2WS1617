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

	cout << "== Cocktail ==" << endl;
	cout << name;
	//TODO

}