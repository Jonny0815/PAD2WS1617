#include "stdafx.h"
#include "Cocktail.h"

using namespace std;

void Cocktail::set_name(string nam_h) {

	name = nam_h;

}

void Cocktail::set_ingredients(Ingredient* ing_h[]) {

	//TODO

}

string Cocktail::get_name() {


	return name;


}

Ingredient Cocktail::get_ingredients() {

	return; //TODO

}

void Cocktail::print() {

	cout << "== Cocktail ==" << endl;
	cout << name;
	//TODO

}