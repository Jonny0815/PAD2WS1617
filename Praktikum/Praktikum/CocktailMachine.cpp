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

	



	/*
	ofstream out_i;
	out_i.open("Ingredients.bin", ios::binary | ios::out);
	
	for (size_t i = 0; i < ingredients.size(); i++)
	{
		out_i << ingredients.at(i)->get_name() << ";";
	}
	
	out_i.close();

	ofstream out_d;
	out_d.open("Dispensers.bin", ios::binary | ios::out);

	for (size_t i = 0; i < dispensers.size(); i++)
	{
		out_d << dispensers.at(i)->get_ingredient() << ";" << dispensers.at(i)->get_number() << endl;
	}
	
	out_d.close();

	ofstream out_c;
	out_c.open("Cocktails.bin", ios::binary | ios::out);

	for (size_t i = 0; i < cocktails.size(); i++)
	{
		out_c << cocktails.at(i)->get_name() << ";";

			for (size_t j = 0; j < cocktails.at(i)->get_ingredients().size(); j++)
			{
				out_c << cocktails.at(i)->get_ingredients().at(j).get_name() << ";";
			}

			out_c << endl;
	}
	
	out_c.close();

	*/

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

