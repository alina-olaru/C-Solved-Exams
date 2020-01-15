#include "Casa.h"
#include <iostream>
using namespace std;
float Casa::get_suprafata_curte() const
{
	return suprafata_curte;
}

void Casa::set_suprafata_curte(float suprafata_curte)
{
	this->suprafata_curte = suprafata_curte;
}

int Casa::get_nr_niveluri() const
{
	return nr_niveluri;
}

void Casa::set_nr_niveluri(int nr_niveluri)
{
	this->nr_niveluri = nr_niveluri;
}

void Casa::citire()
{
	Proprietate::citire();
	cout << "\n suprafata_curte";
	cin >> this->suprafata_curte;
	cout << "\n nr_niveluri";
	cin >> this->nr_niveluri;
	
}


void Casa::afisare()
{
	Proprietate::afisare();
	cout << "\n suprafata_curte";
	cout << this->suprafata_curte;
	cout << "\n nr_niveluri";
	cout << this->nr_niveluri;
}

