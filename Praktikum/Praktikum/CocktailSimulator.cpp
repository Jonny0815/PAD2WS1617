#include "stdafx.h"
#include "CocktailSimulator.h"

void CocktailSimulator::makeCocktail(Cocktail* c_h) {

	int ms;

	cout << "== Cocktail ==" << endl;
	cout << c_h->get_name() << endl;

	for (size_t i = 0; i < c_h->get_ingredients().size(); i++)
	{
		cout << "=> " << c_h->get_ingredients().at(i)->get_name() << " - "<< c_h->get_amount().at(i) << " ml" << endl;
	}

	cout << "0 - Exit" << endl;
	cin >> ms;

}