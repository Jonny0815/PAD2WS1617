#include"stdafx.h"
#include "CocktailMachine.h"
#include "Menu.h"



using namespace std;

CocktailMachine::CocktailMachine()
{


	

	ifstream ifs("saved.txt");

	// read the object back in
	ifs >> *this;

}

CocktailMachine::~CocktailMachine()
{

	ofstream ofs("saved.txt");

	ofs << this; // store the object to file
	ofs.close();


}

void CocktailMachine::printCocktails() {




}

