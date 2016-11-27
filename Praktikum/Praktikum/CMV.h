#ifndef CMV_h
#define CMV_h


#include "Cocktail.h"
#include "Ingredient.h"
#include "Dispenser.h"
#include "stdafx.h"


class CMV {

	friend class Menu;


public:

	//con and decon

	CMV();
	~CMV();




	// pusher
	void push_Cocktail(Cocktail*);
	void push_Dispenser(Dispenser*);
	void push_Ingredient(Ingredient*);


	//wörk
	virtual void makeCocktail(Cocktail*) = 0;

private:

	std::vector<Dispenser*> dispensers;
	std::vector<Cocktail*> cocktails;
	std::vector<Ingredient*> ingredients;


};

#endif