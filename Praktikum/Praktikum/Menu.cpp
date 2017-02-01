#include "stdafx.h"


//include all menu headers
#include "Menu.h"



using namespace std;

//constructor

Menu::Menu(CMV* cm_h) {

	this->cm = cm_h;


}

// menu print out
void Menu::Menu_print() {



	do
	{


		cout << "== CocktailMix | V1 ==" << endl;
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


				if (cm->cocktails.at(i)->check_disp(cm->dispensers) == true)
				{
					cout << j << " => " << cm->cocktails.at(i)->get_name() << endl;
				}


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
			cm->makeCocktail(cm->cocktails.at(j));


		}




	} while (menu_select != 0);




}


void Menu::ConfigureMenu_print() {


	do
	{
		system("cls");
		cout << "== CocktailMix | Configure ==" << endl;
		cout << "1 - Configure Dispensers" << endl;
		cout << "2 - List Cocktails" << endl;
		cout << "3 - Add Cocktail" << endl;
		cout << "4 - Delete Cocktail" << endl;
		cout << "5 - Add Ingredient" << endl;
		cout << "6 - Delete Ingredient" << endl;
		cout << "7 - List Ingredients" << endl;
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
			menu_select = -1;
			ListCocMenu_print();
			menu_select = -1;
			break;

		case 3:

			menu_select = -1;
			AddCocMenu_print();
			menu_select = -1;

			break;



		case 4:
			menu_select = -1;
			DelCocMenu_print();
			menu_select = -1;

			break;



		case 5:
			menu_select = -1;
			AddIngMenu_print();
			menu_select = -1;
			break;

		case 6:
			menu_select = -1;
			DelIngMenu_print();
			menu_select = -1;
				break;


		case 7:
			menu_select = -1;
			ListIngMenu_print();
			menu_select = -1;
		default:
			break;
		}
	} while (menu_select != 0);




}

void Menu::AddCocMenu_print() {

	string name;
	float amount;
	Cocktail *c_n = new Cocktail;

	system("cls");
	cout << "== CocktailMix | Add Cocktail ==" << endl;
	cout << "Name: ";
	cin >> name;
	c_n->set_name(name);
	cout << "Select Ingredients: " << endl;
	

	
	for (size_t i = 0; i < cm->ingredients.size(); i++)
	{
		size_t j = i + 1;

		cout << j << " => " << cm->ingredients.at(i)->get_name() << endl;
	}
	cout << "0 - Finish adding Ingredients" << endl;

	while (menu_select != 0)
	{
		
		cout << "Choice: ";
		cin >> menu_select;

		if (menu_select != 0)
		{
			c_n->push_ingredient(cm->ingredients.at(menu_select - 1));
			cout << "Ingredient added, insert amount: ";
			cin >> amount;
			c_n->push_amount(amount);
	}

	}

	cm->cocktails.push_back(c_n);
	
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

			if (menu_select == 0) {
				
				cm->dispensers.at(mss)->set_ingredient(NULL);

			}

			else
			{
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
		}
		 

		system("cls");






	} while (menu_select != 0);




}



void Menu::AddIngMenu_print() {


	system("cls");

	Ingredient *ing_n = new Ingredient;

	cout << "== CocktailMix | Add Ingredient ==" << endl;
	cout << "1 - Add" << endl;
	if (cm->ingredients.size() != 0)
	{
		for (size_t i = 0; i < cm->ingredients.size(); i++)
		{
			size_t j = i + 2;
			cout << j << " => " << cm->ingredients.at(i)->get_name() << endl;
		}



	}

	else {

		cout << "No Ingredients" << endl;
		ConfigureMenu_print();

	}
	cout << "0 - Exit" << endl;
	cout << "Choice: ";
	cin >> menu_select;
	if (menu_select == 0)
	{
		menu_select = -1;
	}
	else if (menu_select == 1)
	{
		string add = "";
		cout << "Please enter an ingredient to add:  ";
		cin >> add;
		ing_n->set_name(add);
		cm->ingredients.push_back(ing_n);
		menu_select = -1;
		

	}
	


}


void Menu::DelIngMenu_print()
{
	system("cls");
	menu_select = -1;
	cout << "== CocktailMix | Delete Ingredient ==" << endl;
	if (cm->ingredients.size() != 0)
	{
		for (size_t i = 0; i < cm->ingredients.size(); i++)
		{
			size_t j = i + 1;
			cout << j << " => " << cm->ingredients.at(i)->get_name() << endl;
		}
		cout << "0 - Exit" << endl;
		cout << "Choice: ";
		cin >> menu_select;

		if (menu_select == 0)
		{
			system("cls");
			menu_select = -1;
			
		}
		else if (menu_select <= cm->ingredients.size() + 1)
		{
			cm->ingredients.erase(cm->ingredients.begin() + menu_select-1);
			system("cls");
			menu_select = -1;
		}
		


	}

	else {

		cout << "No Ingredients" << endl;
		

	}
}


void Menu::ListCocMenu_print() {


	system("cls");
	cout << "== CocktailMix | List Cocktails ==" << endl;
	if (cm->cocktails.size() != 0)
	{
		for (size_t i = 0; i < cm->cocktails.size(); i++)
		{
			size_t j = i + 1;


			cout << j << " => " << cm->cocktails.at(i)->get_name() << endl;
		}

		cout << "0 - Exit" << endl;
		cout << "Choice: ";
		cin >> menu_select;
		

	}
	else {

		cout << "No Cocktails" << endl;
		ConfigureMenu_print();

	}

}


void Menu::DelCocMenu_print() {

	system("cls");
	menu_select = -1;
	cout << "== CocktailMix | Delete Ingredient ==" << endl;
	if (cm->cocktails.size() != 0)
	{
		for (size_t i = 0; i < cm->cocktails.size(); i++)
		{
			size_t j = i + 1;
			cout << j << " => " << cm->cocktails.at(i)->get_name() << endl;
		}
		cout << "0 - Exit" << endl;
		cout << "Choice: ";
		cin >> menu_select;

		if (menu_select == 0)
		{
			system("cls");
			menu_select = -1;
			
		}
		else if (menu_select <= cm->cocktails.size() + 1)
		{
			cm->cocktails.erase(cm->cocktails.begin() + menu_select - 1);
			system("cls");
			menu_select = -1;
			
		}
		


	}

	else {

		cout << "No Ingredients" << endl;
		ConfigureMenu_print();

	}

}


void Menu::ListIngMenu_print() {

	system("cls");
	cout << "== CocktailMix | List Ingredients ==" << endl;
	if (cm->ingredients.size() != 0)
	{
		for (size_t i = 0; i < cm->ingredients.size(); i++)
		{
			size_t j = i + 1;

			cout << j << " => " << cm->ingredients.at(i)->get_name() << endl;
		}
		cout << "0 - Exit" << endl;
		cout << "Choice: ";
		cin >> menu_select;
		

	}
	else {

		cout << "No Ingredients" << endl;
		ConfigureMenu_print();

	}

}