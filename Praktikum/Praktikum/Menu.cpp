#include "stdafx.h"


//include all menu headers
#include "Menu.h"



using namespace std;

//constructor

Menu::Menu(CocktailMachine* cm_h) {

	this->cm = cm_h;


}

// menu print out
void Menu::Menu_print() {



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

			menu_select = -1;
			MakeMenu_print();

			break;

		case 2:
			//start Configure CocktailMix menu

			menu_select = -1;
			ConfigureMenu_print();

			break;

		default:
			break;
		}

		
	} while (menu_select != 0);

	
}

void Menu::MakeMenu_print() {


	do
	{

		system("cls");
		cout << "== CocktailMix | Mix it ==" << endl;
		

		for (size_t i = 0; i < sizeof(cm->cocktails); i++)
		{
			cout << i++ << " - " << cm->cocktails.at(i)->get_name() << endl;
		}

		cout << "0 - Exit " << endl;
		cout << "Choice: ";
		cin >> menu_select;
		system("cls");
		
		if (menu_select < sizeof(cm->cocktails)) {

			cout << "No Cocktail found!" << endl;

		}
		else {


			cm->cocktails.at(menu_select)->print;


		}




	} while (menu_select != 0);




}


void Menu::ConfigureMenu_print() {


	do
	{
		system("cls");
		cout << "== CocktailMix | Configure ==" << endl;
		cout << "1 - Configure Dispensers" << endl;
		cout << "2 - List Cocktail" << endl;
		cout << "3 - Add Cocktail" << endl;
		cout << "4 - Edit Cocktail" << endl;
		cout << "5 - Delete Cocktail" << endl;
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

			menu_select = -1;
			DispenserMenu_print();


			break;

		case 2:

			break;

		case 6:

			break;

		default:
			break;
		}
	} while (menu_select != 0);




}


void Menu::DispenserMenu_print() {  //TODO

	do {

		system("cls");

		//sort(cm->dispensers.begin(), cm->dispensers.end());

		cout << "== CocktailMix | Configure Dispenser ==" << endl;

		for (size_t i = 0; i < 5; i++)
		{





			cout << i++ << " - " << cm->dispensers.at(i) << endl;
		}

		cout << "0 - Exit " << endl;
		cout << "Choice: ";
		cin >> menu_select;
		system("cls");






	} while (menu_select != 0);




}