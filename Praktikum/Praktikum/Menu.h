#ifndef Menu_h
#define Menu_h

#include "Cocktail.h"
#include "Ingredient.h"
#include "CocktailMachine.h"



class Menu
{
	friend class CocktailMachine;

public:
	
	Menu(CMV* cm_h);
	//~Menu();
	void Menu_print();
	void MakeMenu_print();
	void ConfigureMenu_print();
	void DispenserMenu_print();
	void AddIngMenu_print();
	void AddCocMenu_print();
	void ListCocMenu_print();
	void ListIngMenu_print();



private:
	CMV* cm;
	int menu_select = -1;

};


#endif