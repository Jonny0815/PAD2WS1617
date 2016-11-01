// Praktikum.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "CocktailMachine.h"
#include "Menu.h"


using namespace std;

int main()
{
	
	CocktailMachine* cm_p = new CocktailMachine;
	
	Menu menu(cm_p);
	menu.Menu_print();

	delete cm_p;
	
    return 0;
}

