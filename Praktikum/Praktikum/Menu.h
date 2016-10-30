#pragma once

#include "CC_menu.h"
#include "MC_menu.h"
#include "Cocktail.h"
#include "Ingredient.h"
#include "CocktailMachine.h"

#ifndef Menu_h
#define Menu_h

class Menu {
	

	friend class CocktailMachine;

public:
	void print();
	Menu(CocktailMachine* cm_h);


private:
	int menu_select = -1;
	CocktailMachine* cm;



};

#endif