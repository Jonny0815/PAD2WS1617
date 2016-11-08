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
			menu_select = -1;
			break;

		case 2:
			//start Configure CocktailMix menu

			menu_select = -1;
			ConfigureMenu_print();
			menu_select = -1;
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
		
		
		if (cm->cocktails.size() != 0)
		{
			for (size_t i = 0; i < cm->cocktails.size(); i++)
			{
				size_t j = i + 1;

				cout << j << " - " << cm->cocktails.at(i)->get_name() << endl;
				
			}
		}
		else {

			cout << "No Cocktails" << endl;

		}
		

		cout << "0 - Exit " << endl;
		cout << "Choice: ";
		cin >> menu_select;
		system("cls");
		
		if (menu_select != 0) {

			int j = menu_select - 1;
			cm->cocktails.at(j)->print();


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
		cout << "6 - Add Ingredient" << endl;
		cout << "7 - Delete Ingredient" << endl;
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
			menu_select = -1;

			break;

		case 2:

			break;

		case 3:


			AddCocMenu_print();


			break;

		case 6:

			AddIngMenu_print();

			break;

		default:
			break;
		}
	} while (menu_select != 0);




}

void Menu::AddCocMenu_print() {

	string name;
	string ingr;

	Cocktail* newcock = new Cocktail;

	cout << "== CocktailMix | Add Cocktail ==" << endl;
	cout << "Name: ";
	cin >> name;
	newcock->set_name(name);
	cout << endl << "Finish adding Cocktails by pressing ENTER" << endl;
	
	do {
		cout << "Add Ingredient: ";
		getline(cin, ingr);
		if (ingr != "") {
			for (size_t i = 0; i < cm->ingredients.size(); i++)
			{
				if (cm->ingredients.at(i)->get_name() == ingr)
				{
					newcock->push_ingredient(cm->ingredients.at(i));
					cout << endl <<"Ingredient added!" << endl;
				}
				else {

					char errorselect;
					cout << "No ingredient with the name " << ingr << " found, do you want to create one ?" << endl << "(y/n)?" << endl;
					cin >> errorselect;

					switch (errorselect)
					{
					case 'y':

						Ingredient* ingr_n = new Ingredient;
						ingr_n->set_name(ingr);
						cm->ingredients.push_back(ingr_n);
						newcock->push_ingredient(ingr_n);
						cout << endl << "New Ingredient created and added to your new Cocktail" << endl;

						break;

					case 'n':

						cout << "Aborting Cocktail creation" << endl;
						delete newcock;
						return;
						

						break;

					default:
						break;
					}

				}
			}



		}
	} while (ingr != "");



	cm->cocktails.push_back(newcock);

}

void Menu::DispenserMenu_print() {  

	do {

		system("cls");

		cout << "== CocktailMix | Configure Dispenser ==" << endl;

		for (size_t i = 0; i < 6; i++)
		{

			cout << cm->dispensers.at(i)->get_number() << " - ";
			
			if (cm->dispensers.at(i)->get_ingredient() != NULL)
			{
				cout << cm->dispensers.at(i)->get_ingredient()->get_name() << endl;
			}
			else {
				cout << "Free" << endl;
			}
		}

		cout << "0 - Exit " << endl;
		cout << "Choice: ";
		cin >> menu_select;
		system("cls");

		if (menu_select > 0 && menu_select < 7) {

			int mss = menu_select - 1;
			int j;


			if (cm->ingredients.size() != 0)
			{

				for (size_t i = 0; i < cm->ingredients.size(); i++)
				{
					j = i + 1;
					cout << j << " - " << cm->ingredients.at(i)->get_name() << endl;

				}
			}
			else {

				cout << "No Ingredients" << endl;

			}

			cout << "0 - Exit" << endl;
			cout << "Choice: ";
			menu_select = -1;
			cin >> menu_select;
			system("cls");

			if (menu_select != 0 && menu_select <= cm->ingredients.size())
			{
				menu_select--;

				cm->dispensers.at(mss)->set_ingredient(cm->ingredients.at(menu_select));

				menu_select = -1;
			}
			else {

				cout << "No such Ingredient " << menu_select << endl;
				cout << "0 - Exit" << endl;
				cout << "Choice: ";
				menu_select = -1;
				cin >> menu_select;



			}

			

		}
		 

		system("cls");






	} while (menu_select != 0);




}



void Menu::AddIngMenu_print() {


	string name_t;
	Ingredient* ing_t = new Ingredient;


	system("cls");
	cout << "== CocktailMix | Add Ingredient ==" << endl;
	cout << "Name: ";
	cin >> name_t;
	ing_t->set_name(name_t);
	cm->push_Ingredient(ing_t);
	


}





//save n load


