#ifndef CocktailSimulator_h
#define CocktailSimulator_h

#include "CMV.h"


class CocktailSimulator : public CMV {

	friend class Menu;

	void makeCocktail(Cocktail*);

};

#endif