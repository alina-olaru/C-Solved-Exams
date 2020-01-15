#include "Proprietate.h"
#include <iostream>
using namespace std;

Proprietate::Proprietate()
{
	this->in_locatie = id;
	id++;
}

std::string Proprietate::get_adresa() const
{
	return adresa;
}

void Proprietate::set_adresa(std::string adresa)
{
	this->adresa = adresa;
}

float Proprietate::get_suprafata_mp() const
{
	return suprafata_mp;
}

void Proprietate::set_suprafata_mp(float suprafata_mp)
{
	this->suprafata_mp = suprafata_mp;
}

float Proprietate::get_chirie_mp() const
{
	return chirie_mp;
}

void Proprietate::set_chirie_mp(float chirie_mp)
{
	this->chirie_mp = chirie_mp;
}

void Proprietate::citire()
{
	std::cout << "\nadresa";
	cin >> this->adresa;
	std::cout << "\nsuprafata_mp";
	cin >> this->suprafata_mp;
	std::cout << "\nchirie_mp";
	cin >> this->chirie_mp;
}

void Proprietate::afisare()
{
	std::cout << "\nadresa";
	std::cout << this->adresa;
	std::cout << "\nsuprafata_mp";
	std::cout << this->suprafata_mp;
	std::cout << "\nchirie_mp";
	std::cout << this->chirie_mp;
	cout << endl << endl << this->in_locatie << endl << endl;
}

int Proprietate::get_in_locatie() const
{
	return in_locatie;
}

void Proprietate::set_in_locatie(int in_locatie)
{
	this->in_locatie = in_locatie;
}
