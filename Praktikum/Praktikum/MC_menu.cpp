#include "stdafx.h"

#include "MC_menu.h"



using namespace std;

void MC_menu::print() {

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

		break;

	
	default:
		break;
	}

}