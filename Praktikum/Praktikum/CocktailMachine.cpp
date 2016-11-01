#include"stdafx.h"
#include "CocktailMachine.h"
#include "Menu.h"



using namespace std;

CocktailMachine::CocktailMachine()
{

	fstream file("CocktailMachine.bin", ios::binary | ios::in | ios::out | ios::trunc);
	file.read((char *) this, sizeof(CocktailMachine));
	file.close;


}

CocktailMachine::~CocktailMachine()
{
	fstream file("CocktailMachine.bin", ios::binary | ios::in | ios::out | ios::trunc);
	file.write((char *) this, sizeof(CocktailMachine));
	file.close;

}

void CocktailMachine::printCocktails() {




}

