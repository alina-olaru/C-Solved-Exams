#include "Firma.h"
#include <iostream>
using namespace std;
void Firma::citire()
{
	cout << "nr ";
	cin >> nr_contracte;
	for(int i=0;i<nr_contracte;i++)
	{
		Contract* cc = new Contract();
		cc->citire();
		this->c.push_back(cc);
	}
}

void Firma::afisare()
{
	cout << "nr ";
	cout<< nr_contracte;
	for(auto y:this->c)
	{
		y->afisare();
	}
	
}

void Firma::afisare_stare_imobile(int an, int luna, int zi)
{
	for(auto y:this->istoric.get_proprietati_totale())
	{
		int id= -1;
		 id=y->get_in_locatie();
		for(auto i:this->c)
		{
			for(auto z:i->get_p())
			{
				if(id=z->get_in_locatie())
				{
					if ((i->get_data_final().get_t() > an) || (i->get_data_final().get_t() == an) &&
						((i->get_data_final().get_s() > luna))) {
						if (i->get_tip_contract() == 0)
						{
							cout << "inchiriere";
						}
						if (i->get_tip_contract() == 1)
						{
							cout << "vanzare";
						}
					}
				}
			}
		}
		if(id==-1)
		{
			cout << "liber";
		}
	}
}
