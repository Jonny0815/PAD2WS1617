#pragma once
#include "stdafx.h"
#include "Ingredient.h"
#ifndef Cocktail_h
#define Cocktail_h
class Cocktail
{
public:

	

	

	//getter
	std::string get_name();
	std::vector<Ingredient*> get_ingredients();
	std::vector<float> get_amount();

	//push and setter
	void push_ingredient(Ingredient*);
	void push_amount(float);
	void set_name(string);


	

private:

	std::string name;
	std::vector<Ingredient*> ingredients;
	std::vector<float> amount;
	
};

#endif