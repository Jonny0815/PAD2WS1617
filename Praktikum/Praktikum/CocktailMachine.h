#ifndef CocktailMachine_h
#define CocktailMachine_h

#include "CMV.h"


class CocktailMachine : public CMV { 

	friend class Menu;

	void makeCocktail(Cocktail*);

};

#endif