#pragma once
#include "Vec3D.h"
#include <string>
class Star
{

	std::string name;
	Vec3D pos;
	char spec;


public:
	Star();
	Star(std::string, Vec3D, char);
	~Star();
	void print();



};

