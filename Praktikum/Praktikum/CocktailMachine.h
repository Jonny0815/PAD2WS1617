#pragma once

#include "Cocktail.h"
#include "Ingredient.h"
#include "Dispenser.h"

#ifndef CocktailMachine_h
#define CocktailMachine_h

class CocktailMachine {

	friend class Menu;

public:

	//dencon

	CocktailMachine();
	~CocktailMachine();
	
	//setter
	void set_dispensers(std::vector<Dispenser*>);
	void set_cocktails(std::vector<Cocktail*>);

	//getter
	std::vector<Dispenser*> get_dispensers();
	std::vector<Cocktail*> get_cocktails();


	//wörk
	void makeCocktail(Cocktail*);
	void makeCocktail(int);
	void printCocktails();
	void printMenu();


	




private:
	
	std::vector<Dispenser*> dispensers;
	std::vector<Cocktail*> cocktails;



};

#endif