#include "TESA.h"

int TESA::get_weekend() const
{
	return weekend;
}

void TESA::set_weekend(int weekend)
{
	this->weekend = weekend;
}

void TESA::citire()
{
	Angajat::citire();
	cout << "\nPt minivacanta-care weekend? (1,2,3)";
	cin >> this->weekend;
}

void TESA::afisare()
{
	Angajat::afisare();
	cout << "\nPt minivacanta-care weekend? (1,2,3)";
	cout << this->weekend;
}
