#include "stdafx.h"

#include "MC_menu.h"



using namespace std;

void MC_menu::print() {



	Cocktail* c1 = new Cocktail;
	Ingredient* i1 = new Ingredient;
	Ingredient* i2 = new Ingredient;
	Ingredient* i3 = new Ingredient;

	i1->set_name("Tequila");
	i2->set_name("Orange juice");
	i3->set_name("Grenadine");

	c1->push_ingredient(*i1);
	c1->push_ingredient(*i2);
	c1->push_ingredient(*i3);



	do
	{


		cout << "== CocktailMix | Mix it ==" << endl;
		cout << "1 - Screwdriver" << endl;
		cout << "2 - Tequila Sunrise" << endl;
		cout << "0 - Exit " << endl;
		cout << "Choice: ";
		cin >> menu_select;
		system("cls");
		switch (menu_select)
		{
		case 0:

			// return to main menu

			break;

		case 1:

			break;

		case 2:

			c1->print();

			break;


		default:
			break;
		}

	} while (menu_select != 0);
}