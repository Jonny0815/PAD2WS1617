#include"stdafx.h"
#include "CocktailMachine.h"
#include "Menu.h"



using namespace std;









CocktailMachine::CocktailMachine()
{
	TiXmlDocument* doc = new TiXmlDocument("cm.xml");
	doc->LoadFile();

	TiXmlElement* cm_x = doc->RootElement();
	TiXmlElement* disp = new TiXmlElement("dispens");
	TiXmlElement* ingr = new TiXmlElement("ingredients");
	TiXmlElement* cock = new TiXmlElement("cocktails");


	// load disp cock ingr out of cm

	for (TiXmlElement* elem = cm_x->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement())
	{
		string elemName = elem->Value();


		if (elemName == "dispensers")
		{
			disp = elem;
			cout << "disp" << endl;
		}
		if (elemName == "ingredients")
		{
			ingr = elem;
			cout << "ingr" << endl;
		}
		if (elemName == "cocktails")
		{
			cock = elem;
			cout << "cock" << endl;
		}



	}


	//load ingr

	for (TiXmlElement* elem = ingr->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement())
	{

		
		Ingredient* i_load = new Ingredient;
		i_load->set_name(elem->Attribute("name"));
		cout << elem->Value() << endl;
		ingredients.push_back(i_load);
	}

	//load and link disp

	for (TiXmlElement* elem = disp->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement())
	{

		
		Dispenser* d_load = new Dispenser;
		const char* cnumber = elem->Attribute("number");
		int number = int(cnumber[0]) - 48;
		d_load->set_number(number);
		cout << elem->Value()  << "-" << elem->Attribute("number") << " - " << number << endl;

		string ingredient = elem->Attribute("ingredient");

		cout << elem->Attribute("ingredient") << " - " << ingredient <<  endl;
		
		if (ingredient.c_str() == "NULL") {

			cout << "set NULL" << endl;
			d_load->set_ingredient(NULL);


		}
		else {

			for (size_t i = 0; i < ingredients.size(); i++)
			{
				if (ingredients.at(i)->get_name() == ingredient)
				{
					d_load->set_ingredient(ingredients.at(i));

				}
			}


			dispensers.push_back(d_load);


		}


		
}
	
	
	//load and link cock
	
	for (TiXmlElement* elem = cock->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement())
	{
		Cocktail* c_load = new Cocktail;
		c_load->set_name(elem->Attribute("name"));
		cout << elem->Value() << " - " << c_load->get_name() << endl;

		//load ingredients

		for (TiXmlElement* elem2 = elem->FirstChildElement(); elem2 != NULL; elem2 = elem2->NextSiblingElement())
		{


			string ingredient = elem2->Attribute("ingredient");

			cout << elem2->Attribute("ingredient") << " - " << ingredient << endl;

			if (ingredient.c_str() == "NULL") {

				cout << "set NULL" << endl;



			}
			else {

				for (size_t i = 0; i < ingredients.size(); i++)
				{
					if (ingredients.at(i)->get_name() == ingredient)
					{
						c_load->push_ingredient(ingredients.at(i));
						cout << "pushed i" + i << endl;
					}
				}


				
			}

		}


		cocktails.push_back(c_load);
		cout << "pushed a cocktail" << endl;

	}
	// create new dispensers if empty
		if (dispensers.size() != 6) {

			cout << "created new dispensers" << endl;

			dispensers.clear();
			for (size_t i = 0; i < 6; i++)
			{
				size_t j = i + 1;
				Dispenser* disp = new Dispenser;
				disp->set_number(j);
				this->dispensers.push_back(disp);
			}

		}
		
		
	
}
CocktailMachine::~CocktailMachine()
{

	TiXmlDocument doc;
	TiXmlDeclaration* decl = new TiXmlDeclaration("1.0", "", "");
	doc.LinkEndChild(decl);
	TiXmlElement* cm = new TiXmlElement("CocktailMachine");
	doc.LinkEndChild(cm);

	TiXmlElement* disp = new TiXmlElement("dispensers");
	cm->LinkEndChild(disp);
	TiXmlElement* cock = new TiXmlElement("cocktails");
	cm->LinkEndChild(cock);
	TiXmlElement* ingr = new TiXmlElement("ingredients");
	cm->LinkEndChild(ingr);


	



	for (size_t i = 0; i < dispensers.size(); i++)
	{
		stringstream ss;
		ss << i;
		string s ="d" + ss.str();
		TiXmlElement* x_disp = new TiXmlElement(s.c_str());
		disp->LinkEndChild(x_disp);
		x_disp->SetAttribute("number", dispensers.at(i)->get_number());
		if (dispensers.at(i)->get_ingredient() == NULL) {

			x_disp->SetAttribute("ingredient", "NULL");

		}
		else {


			x_disp->SetAttribute("ingredient", dispensers.at(i)->get_ingredient()->get_name().c_str());

		}
		
	}


	if (cocktails.size() != 0)
		for (size_t i = 0; i < cocktails.size(); i++)
		{


			stringstream ss;
			ss << i;
			string s = "c" + ss.str();
			TiXmlElement* ct = new TiXmlElement(s.c_str());
			cock->LinkEndChild(ct);
			ct->SetAttribute("name", cocktails.at(i)->get_name().c_str());

			for (size_t j = 0; j < cocktails.at(i)->get_ingredients().size(); j++)
			{
				
				stringstream ss;
				ss << j;
				string s ="i" + ss.str();
				TiXmlElement* ct_s = new TiXmlElement(s.c_str());
				ct->LinkEndChild(ct_s);
				
				ct_s->SetAttribute("ingredient", cocktails.at(i)->get_ingredients().at(j)->get_name().c_str());
			}

		}



	if (ingredients.size() != 0)
		for (size_t i = 0; i < ingredients.size(); i++)
		{
			stringstream ss;
			ss << i;
			string s = "i" + ss.str();
			TiXmlElement* x_ingr = new TiXmlElement(s.c_str());
			ingr->LinkEndChild(x_ingr);
			x_ingr->SetAttribute("name", ingredients.at(i)->get_name().c_str());

		}


	doc.SaveFile("CM.xml");
	doc.Clear();

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

