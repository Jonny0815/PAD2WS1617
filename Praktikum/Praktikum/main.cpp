// Praktikum.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "CocktailMachine.h"
#include "Menu.h"


using namespace std;





int main()
{
	

	
	
	Cocktail* c1 = new Cocktail;
	Cocktail* c2 = new Cocktail;
	Ingredient* i1 = new Ingredient;
	Ingredient* i2 = new Ingredient;
	Ingredient* i3 = new Ingredient;

	c1->set_name("Tequila Sunrise");
	i1->set_name("Tequila");
	i2->set_name("Orange juice");
	i3->set_name("Grenadine");

	c1->push_ingredient(i1);
	c1->push_ingredient(i2);
	c1->push_ingredient(i3);

	c2->set_name("tq2");
	c2->push_ingredient(i1);
	c2->push_ingredient(i2);
	c2->push_ingredient(i3);
	
	

	CocktailMachine* cm_p = new CocktailMachine;
	
	cm_p->push_Cocktail(c1);
	cm_p->push_Cocktail(c2);


	

	Menu menu(cm_p);


	menu.Menu_print();

	delete cm_p;
	
    return 0;
}

