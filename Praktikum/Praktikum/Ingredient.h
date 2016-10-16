#pragma once
#include "stdafx.h"
#ifndef Ingredient_h
#define Ingredient_h
class Ingredient 
{
public:
	
	std::string get_name();
	void set_name(std::string);

private:

	std::string name;
	
};

#endif