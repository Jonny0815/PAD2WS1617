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
			write("CocktailMachine.bin", cm);

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

		case 6:

			AddIngMenu_print();

			break;

		default:
			break;
		}
	} while (menu_select != 0);




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

			for (size_t i = 0; i < cm->ingredients.size(); i++)
			{
			cm->ingredients.at(i)->get_name();

			}

			cout << "0 - Exit " << endl;
			menu_select = -1;
			cout << "Choice: ";
			cin >> menu_select;

			

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
	delete ing_t;


}





//save n load


void Menu::write(const std::string& file_name, CocktailMachine* data) // Writes the given OBJECT data to the given file name.
{
	ofstream out;
	out.open(file_name, std::ios::binary);
	out.write(reinterpret_cast<char*>(&data), sizeof(CocktailMachine));
	out.close();
};

void Menu::read(const std::string& file_name, CocktailMachine* data) // Reads the given file and assigns the data to the given OBJECT.
{
	ifstream in;
	in.open(file_name, std::ios::binary);
	in.read(reinterpret_cast<char*>(&data), sizeof(CocktailMachine));
	in.close();
};