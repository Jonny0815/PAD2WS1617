#pragma once
#include <string>
#include <vector>
#include "Star.h"
class Universe
{
private:
	std::string name;
	std::vector<Star> stars;

public:
	Universe();
	~Universe();
	void addStar(Star);

};

