// Praktikum.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "CMV.h"
#include "CocktailMachine.h"
#include "CocktailSimulator.h"
#include "Menu.h"
#include "inc\tinyxml.h"


using namespace std;





int main()
{


	CMV* cm_p;

	if (true) { //check for open com port to cocktailmachine here TODO

		cm_p = new CocktailSimulator;


	}
	else {

		cm_p = new CocktailMachine;

	}
	
	Menu menu(cm_p);
	menu.Menu_print();
	
	delete cm_p;
	


    return 0;
}

