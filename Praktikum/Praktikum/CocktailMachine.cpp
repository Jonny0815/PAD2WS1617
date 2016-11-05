#include"stdafx.h"
#include "CocktailMachine.h"
#include "Menu.h"



using namespace std;




CocktailMachine::CocktailMachine()
{
	

	/*
	ifstream ifs("CM");
	boost::archive::text_iarchive ia(ifs);
	// read class state from archive
	ia >> this;


	if (dispensers.size() != 6) {

		dispensers.clear();
		for (size_t i = 0; i < 6; i++)
		{
			size_t j = i + 1;
			Dispenser* disp = new Dispenser;
			disp->set_number(j);
			this->dispensers.push_back(disp);
		}

	}
	*/

}

CocktailMachine::~CocktailMachine()
{

	



}





void CocktailMachine::printCocktails() {




}

void CocktailMachine::push_Cocktail(Cocktail* c_h) {


	cocktails.push_back(c_h);


}

void CocktailMachine::push_Dispenser(Dispenser* d_h) {


	dispensers.push_back(d_h);

}

void CocktailMachine::push_Ingredient(Ingredient* i_g) {


	ingredients.push_back(i_g);

}

