#pragma once
#include "stdafx.h"
#include "Ingredient.h"
#ifndef Cocktail_h
#define Cocktail_h
class Cocktail
{
public:

	

	//setter
	void set_name(std::string);
	void set_ingredients(std::vector<Ingredient*>);

	//getter
	std::string get_name();
	std::vector<Ingredient*> get_ingredients();

	//wörk
	void print();
	void push_ingredient(Ingredient*);



	

private:

	std::string name;
	std::vector<Ingredient*> ingredients;
};

#endif