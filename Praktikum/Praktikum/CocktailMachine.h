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

	
	


	// pusher
	void push_Cocktail(Cocktail*);
	void push_Dispenser(Dispenser*);
	void push_Ingredient(Ingredient*);


	//wörk
	void makeCocktail(Cocktail*);
	void makeCocktail(int);
	void printCocktails();
	
	
	
	



private:
	
	std::vector<Dispenser*> dispensers;
	std::vector<Cocktail*> cocktails;
	std::vector<Ingredient*> ingredients;



};

#endif