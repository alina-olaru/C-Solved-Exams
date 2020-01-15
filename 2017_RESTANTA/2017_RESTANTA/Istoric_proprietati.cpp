#include "Istoric_proprietati.h"
#include <iostream>
#include "Casa.h"
#include "Apartament.h"
using namespace std;
void Istoric_proprietati::citire()
{
	std::cout << "n\nnr proprietati: ";
	std::cin >> this->nr_prop;
	for (int i = 0; i < nr_prop; i++)
	{
		cout << "\n1 pt casa,\n2 pt apartament";
		int ch;
		cin >> ch;
		switch (ch) {
		case 1: {
			Casa* p = new Casa();
			p->citire();
			this->proprietati_totale.push_back(p);
			break;
		}
		case 2: {
			Apartament* p = new Apartament();
			p->citire();
			this->proprietati_totale.push_back(p);
			break;
		}
		}
	}
}
	void Istoric_proprietati::afisare()
	{
		cout << "nr prop\n\n" << this->nr_prop;
		cout << "CASA " << endl;
		for (auto y : this->proprietati_totale)
		{
			if (typeid(*y) == typeid(Casa)) {
				y->afisare();
			}
		}

		cout << "APARTAMENT " << endl;
		for (auto y : this->proprietati_totale)
		{
			if (typeid(*y) == typeid(Apartament)) {
				y->afisare();
			}
		}
	}

int Istoric_proprietati::get_nr_prop() const
{
	return nr_prop;
}

void Istoric_proprietati::set_nr_prop(int nr_prop)
{
	this->nr_prop = nr_prop;
}

std::vector<Proprietate*> Istoric_proprietati::get_proprietati_totale() const
{
	return proprietati_totale;
}

void Istoric_proprietati::set_proprietati_totale(std::vector<Proprietate*> proprietati_totale)
{
	this->proprietati_totale = proprietati_totale;
}
