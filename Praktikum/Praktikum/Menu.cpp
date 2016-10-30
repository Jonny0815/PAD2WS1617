#include "stdafx.h"


//include all menu headers
#include "Menu.h"
#include "CC_menu.h"
#include "MC_menu.h"



using namespace std;

//constructor

Menu::Menu(CocktailMachine* cm_h) {

	this->cm = cm_h;


}

// menu print out
void Menu::print() {

	//initialization of menus
	MC_menu* mc_menu = new MC_menu;
	CC_menu* cc_menu = new CC_menu;

	do
	{


		cout << "== CocktailMix | V0.2 ==" << endl;
		cout << "1 - Make Cocktails" << endl;
		cout << "2 - Configure CocktailMix" << endl;
		cout << "0 - Exit " << endl;
		cout << "Choice: ";
		cin >> menu_select;
		system("cls");
		switch (menu_select)
		{
		case 0:

			//close CocktailMix
			delete mc_menu;
			delete cc_menu;

			break;

		case 1:
			//start Make Cocktail menu

			mc_menu->print();

			break;

		case 2:
			//start Configure CocktailMix menu

			cc_menu->print();

			break;

		default:
			break;
		}

		
	} while (menu_select != 0);

	
}