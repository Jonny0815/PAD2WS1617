#pragma once


#include "Cocktail.h"
#include "Ingredient.h"
#include "CocktailMachine.h"

#ifndef Menu_h
#define Menu_h

class Menu
{
	friend class CocktailMachine;

public:
	Menu(CocktailMachine* cm_h);
	~Menu();
	virtual void print();

private:
	CocktailMachine* cm;
	int menu_select = -1;

};




class MainMenu: public Menu
{
public:
	MainMenu();
	~MainMenu();

private:
	
};




class ConfigureMenu: public Menu
{
public:
	ConfigureMenu();
	~ConfigureMenu();

private:

};



class MakeMenu: public Menu
{
public:
	MakeMenu();
	~MakeMenu();

private:

};


#endif