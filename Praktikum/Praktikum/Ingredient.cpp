#include "stdafx.h"

#include "Ingredient.h"


using namespace std;

void Ingredient::set_name(string name_h) {

	name = name_h;

}

string Ingredient::get_name() {

	return name;

}

int Ingredient::get_dispensing() {
	return dispensing;
}

void Ingredient::set_dispensing(int h_d) {

	dispensing = h_d;

}