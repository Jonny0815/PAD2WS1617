#include "stdafx.h"
#include "CocktailSimulator.h"

void CocktailSimulator::makeCocktail(Cocktail* c_h) {

	int ms;
	int amount_out = 0;
	int all_disp_f = 0;

	cout << "== Cocktail | Making Cocktail ==" << endl;
	cout << c_h->get_name() << endl;

	while (all_disp_f != dispensers.size())
	{
		all_disp_f = 0;


		for (size_t i = 0; i < dispensers.size(); i++)
		{
			for (size_t j = 0; j < c_h->get_ingredients().size(); j++)
			{
				if (dispensers.at(i)->get_ingredient() == c_h->get_ingredients().at(j))
				{
					if (c_h->get_amount().at(j) >= amount_out)
					{
						dispensers.at(i)->set_active(true);
					}
					else {

						dispensers.at(i)->set_active(false);

					}
				}
			}
		}


		for (size_t i = 0; i < dispensers.size(); i++)
		{
			//print here TODO
		}


		for (size_t i = 0; i < dispensers.size(); i++)
		{
			if (!dispensers.at(i)->get_active())
			{
				all_disp_f++;
			}
		}

		std::this_thread::sleep_for(std::chrono::seconds(1));
		amount_out = amount_out + 10;

	}

	cout << "0 - Exit" << endl;
	cin >> ms;

}