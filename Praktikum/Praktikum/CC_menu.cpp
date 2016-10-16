#include "stdafx.h"

#include "CC_menu.h"


using namespace std;

void CC_menu::print() {

	cout << "== CocktailMix | Configure ==" << endl;
	cout << "1 - List Dispenser-Slots" << endl;
	cout << "2 - Edit Dispenser-Slots" << endl;
	cout << "3 - List Igredients" << endl;
	cout << "4 - Add Ingredient" << endl;
	cout << "5 - Edit/Delete Ingredient" << endl;
	cout << "6 - List Cocktail" << endl;
	cout << "7 - Add Cocktail" << endl;
	cout << "8 - Edit/Delete Cocktail" << endl;
	cout << "0 - Exit " << endl;
	cout << "Choice: ";
	cin >> menu_select;
	system("cls");
	switch (menu_select)
	{
	case 0:
		
		//return to main menu


		break;

	case 1:

		break;

	case 2:

		break;


	default:
		break;
	}

}