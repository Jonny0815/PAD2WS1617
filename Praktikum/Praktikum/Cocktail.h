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
	void set_ingredients(Ingredient*[]);

	//getter
	std::string get_name();
	Ingredient get_ingredients();

	//wörk
	void print();

private:

	std::string name;
	//TODO vector ingredient 

};

#endif