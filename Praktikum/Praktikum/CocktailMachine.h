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


	//saven & load, credits to http://www.cplusplus.com/forum/beginner/49924/


	// Insertion operator
	friend std::ostream& operator<<(std::ostream& os, const CocktailMachine& s)
	{
		// write out individual members of s with an end of line between each one
		os << s.dispensers << '\n';
		os << s.cocktails;
		return os;
	}

	// Extraction operator
	friend std::istream& operator >> (std::istream& is, CocktailMachine& s)
	{
		// read in individual members of s
		is >> s.dispensers >> s.cocktails;
		return is;
	}




private:
	
	std::vector<Dispenser*> dispensers;
	std::vector<Cocktail*> cocktails;



};

#endif