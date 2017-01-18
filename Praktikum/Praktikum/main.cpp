// Praktikum.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "CMV.h"
#include "CocktailMachine.h"
#include "CocktailSimulator.h"
#include "Menu.h"
#include "inc\tinyxml.h"
#include	 "DispenserApi.h"


using namespace std;





int main()
{

	int select;
	CMV* cm_p = NULL;

	cout << "Select Mode:" << endl;
	cout << "1. Simulator" << endl;
	cout << "2. Real Deal" << endl;
	cin >> select;

	switch (select)
	{

	case 1: cm_p = new CocktailSimulator;
		break;
	case 2: cm_p = new CocktailMachine;
		break;

	default:
		break;
	}
			
	system("cls");
			

	
	Menu menu(cm_p);
	menu.Menu_print();
	
	delete cm_p;
	


    return 0;
}

