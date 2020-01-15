#include "Cursa_temporara.h"
#include <iostream>
using namespace std;


Cursa_temporara::Cursa_temporara()
{
	this->perioada_activa = 5;
}

int Cursa_temporara::get_perioada_activa() const
{
	return perioada_activa;
}

void Cursa_temporara::set_perioada_activa(int perioada_activa)
{
	this->perioada_activa = perioada_activa;
}

void Cursa_temporara::afisare()
{
	Zbor::afisare();
	cout << "\nperioada activa zbor: " << this->perioada_activa;
}

void Cursa_temporara::citire()
{
	Zbor::citire();
	cout << "Perioada activa: ";
	cin >> this->perioada_activa;
}
