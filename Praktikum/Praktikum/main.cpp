// Praktikum.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"


#include "Menu.h"


using namespace std;

int main()
{
	

	Menu* menu = new Menu;
	menu->print();

	delete menu;
    return 0;
}

