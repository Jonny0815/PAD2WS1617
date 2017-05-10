#pragma once
#include "stdafx.h"
#include "Ingredient.h"
#include "Dispenser.h"
#ifndef Cocktail_h
#define Cocktail_h
class Cocktail
{
public:

	

	

	//getter
	std::string get_name();
	std::vector<Ingredient*> get_ingredients();
	std::vector<float> get_amount();
	std::vector<float> get_amountout();

	//push and setter
	void push_ingredient(Ingredient*);
	void push_amount(float);
	void set_name(string);
	

	//wörk

	bool check_disp(std::vector<Dispenser*>);
	void ingr_out(Ingredient*, float);
	void cleanup();

private:

	std::string name;
	std::vector<Ingredient*> ingredients;
	std::vector<float> amount;
	std::vector<float> amountout;
	
	
	
};

#endif