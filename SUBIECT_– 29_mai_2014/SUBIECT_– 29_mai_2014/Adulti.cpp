#include "Adulti.h"
using namespace std;
#include <string>
#include <vector>
#include<iostream>

Adulti::Adulti()
{
	this->nivel_sedentarism = 0;
	this->fumator = 0;
}

int Adulti::get_fumator() const
{
	return fumator;
}

void Adulti::set_fumator(int fumator)
{
	this->fumator = fumator;
}

int Adulti::get_nivel_sedentarism() const
{
	return nivel_sedentarism;
}

void Adulti::set_nivel_sedentarism(int nivel_sedentarism)
{
	this->nivel_sedentarism = nivel_sedentarism;
}

void Adulti::afisare()
{

	Pacient::afisare();
	cout << "\nNivelul de sedentarism?(sc?zut (0), mediu(1) sau ridicat(2)) ";
	cout << this->nivel_sedentarism;
	cout << "\nFumator (0) sau nefumator(1) ";
	cout << this->fumator;
}

void Adulti::citire()
{
	Pacient::citire();
	cout << "\nNivelul de sedentarism?(sc?zut (0), mediu(1) sau ridicat(2)) ";
	cin >> this->nivel_sedentarism;
	cout << "\nFumator (0) sau nefumator(1) ";
	cin >> this->fumator;
}
