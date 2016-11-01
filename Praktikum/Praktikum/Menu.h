#ifndef Menu_h
#define Menu_h

#include "Cocktail.h"
#include "Ingredient.h"
#include "CocktailMachine.h"



class Menu
{
	friend class CocktailMachine;

public:
	
	Menu(CocktailMachine* cm_h);
	//~Menu();
	void Menu_print();
	void MakeMenu_print();
	void ConfigureMenu_print();
	void DispenserMenu_print();

private:
	CocktailMachine* cm;
	int menu_select = -1;

};


#endif