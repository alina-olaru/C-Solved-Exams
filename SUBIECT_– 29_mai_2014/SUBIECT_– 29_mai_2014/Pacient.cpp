#include "Pacient.h"
#include<vector>
using namespace std;
#include <string>
#include <iostream>
#include <typeinfo>
void Pacient::citire()
{
	cout << "\nNume: ";
	cin >> this->nume;
	cout << "\nPrenume ";
	cin >> this->prenume;
	cout << "\nVasta: ";
	cin >> this->varsta;
	cout << "Adresa: ";
	getchar();
	getline(std::cin, this->adresa);
}

void Pacient::afisare()
{

	cout << "\nNume: ";
	cout << this->nume;
	cout << "\nPrenume ";
	cout << this->prenume;
	cout << "\nVasta: ";
	cout << this->varsta;
	cout << "Adresa: ";
	cout << this->adresa;

	
	
}


Pacient::Pacient()
{
	this->nume = "";
	this->prenume = "";
	this->varsta = 10;
	this->adresa = "";
}

string Pacient::get_nume() const
{
	return nume;
}

void Pacient::set_nume(string nume)
{
	this->nume = nume;
}

string Pacient::get_prenume() const
{
	return prenume;
}

void Pacient::set_prenume(string prenume)
{
	this->prenume = prenume;
}

int Pacient::get_varsta() const
{
	return varsta;
}

void Pacient::set_varsta(int varsta)
{
	this->varsta = varsta;
}

string Pacient::get_adresa() const
{
	return adresa;
}

void Pacient::set_adresa(string adresa)
{
	this->adresa = adresa;
}
