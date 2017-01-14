#include"stdafx.h"
#include "CMV.h"
#include "Menu.h"
#include "CocktailMachine.h"
#include "DispenserApi.h"



using namespace std;




	void CocktailMachine::makeCocktail(Cocktail* c_h) {


		DispenserApi::Startup();


		int ms;
		int amount_out = 0;
		int all_disp_f = 0;
		int output = 1;


		cout << "== Cocktail | Making Cocktail ==" << endl;
		cout << "=> " << c_h->get_name() << endl << endl;
		cout << "|  1  |  2  |  3  |  4  |  5  |  6  | ml" << endl;




		while (all_disp_f != dispensers.size())
		{
			all_disp_f = 0;

			cout << "| ";

			for (size_t i = 0; i < dispensers.size(); i++)
			{
				for (size_t j = 0; j < c_h->get_ingredients().size(); j++)
				{
					if (dispensers.at(i)->get_ingredient() == c_h->get_ingredients().at(j))
					{
						if (c_h->get_amount().at(j) > c_h->get_amountout().at(j))
						{
							dispensers.at(i)->set_active(true);

							c_h->ingr_out(ingredients.at(j), output);

							//cout << "dispenser " << i << " set true" << endl;
						}
						else {

							dispensers.at(i)->set_active(false);
							//cout << "dispenser " << i << " set false" << endl;

						}
					}
				}
			}


			for (size_t i = 0; i < dispensers.size(); i++)
			{
				if (dispensers.at(i)->get_active() == true)
				{
					cout << "ON  | ";
					DispenserApi::SetDispenser(i, DispenserStatus::On);
				}

				if (dispensers.at(i)->get_active() == false)
				{
					cout << "OFF | ";
					DispenserApi::SetDispenser(i, DispenserStatus::Off);
				}
			}



			for (size_t i = 0; i < dispensers.size(); i++)
			{
				if (!dispensers.at(i)->get_active())
				{
					all_disp_f++;
				}
			}

			amount_out = amount_out + output;
			cout << amount_out << endl;

			std::this_thread::sleep_for(std::chrono::seconds(1));

		}

		DispenserApi::SetAllDispensers(DispenserStatus::Off);
		DispenserApi::Cleanup();


		cout << "0 - Exit" << endl;
		cin >> ms;


		

	}




