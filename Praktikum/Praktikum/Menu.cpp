#include "stdafx.h"


//include all menu headers
#include "Menu.h"



using namespace std;

//constructor

Menu::Menu(CocktailMachine* cm_h) {

	this->cm = cm_h;


}

// menu print out
void MainMenu::print() {



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
			

			break;

		case 1:
			//start Make Cocktail menu

			

			break;

		case 2:
			//start Configure CocktailMix menu

			

			break;

		default:
			break;
		}

		
	} while (menu_select != 0);

	
}