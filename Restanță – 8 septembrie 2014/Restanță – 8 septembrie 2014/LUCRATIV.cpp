#include "LUCRATIV.h"

int LUCRATIV::get_nr_copii_minori() const
{
	return nr_copii_minori;
}

void LUCRATIV::set_nr_copii_minori(int nr_copii_minori)
{
	this->nr_copii_minori = nr_copii_minori;
}

void LUCRATIV::citire()
{
	Angajat::citire();
	cout << "\nNr copii minori " << endl;
	cin >> this->nr_copii_minori;
}


void LUCRATIV::afisare()
{
	Angajat::afisare();
	cout << "\nNr copii minori " << endl;
	cout << this->nr_copii_minori;
}

