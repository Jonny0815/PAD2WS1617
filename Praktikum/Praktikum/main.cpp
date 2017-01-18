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

	char select;
	CMV* cm_p = NULL;

	if (true) { //check for open com port to cocktailmachine here TODO


		cout << "No Cocktailbot connected, continue with a Simulation ? (y/n)" << endl;
		cin >> select;

		if (select == 'y') {
			cm_p = new CocktailSimulator;
		}

	}
	else {

		cout << "Cocktailbot connected, continue with the real deal ? (y/n)" << endl;
		cin >> select;

		if (select == 'y') {
			cm_p = new CocktailMachine;
		}
	}
	
	Menu menu(cm_p);
	menu.Menu_print();
	
	delete cm_p;
	


    return 0;
}

