#ifndef CocktailMachine_h
#define CocktailMachine_h


#include "Cocktail.h"
#include "Ingredient.h"
#include "Dispenser.h"



class CocktailMachine {

	friend class Menu;

public:

	//con and decon

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
	void push_Cocktail(Cocktail*);
	void push_Dispenser(Dispenser*);
	void push_Ingredient(Ingredient*);

	




private:
	
	std::vector<Dispenser*> dispensers;
	std::vector<Cocktail*> cocktails;
	std::vector<Ingredient*> ingredients;



};

#endif