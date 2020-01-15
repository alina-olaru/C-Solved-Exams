#include "Apartament.h"
#include <iostream>
using namespace std;
int Apartament::get_nr_camere() const
{
	return nr_camere;
}

void Apartament::set_nr_camere(int nr_camere)
{
	this->nr_camere = nr_camere;
}

int Apartament::get_etaj() const
{
	return etaj;
}

void Apartament::set_etaj(int etaj)
{
	this->etaj = etaj;
}

void Apartament::citire()
{
	Proprietate::citire();
	cout << " nr_camere";
	cin >> this->nr_camere;
	std::cout << " etaj";
	cin >> this->etaj;

}

void Apartament::afisare()
{
	Proprietate::afisare();
	cout << " nr_camere";
	cout << this->nr_camere;
	std::cout << " etaj";
	cout << this->etaj;
}
