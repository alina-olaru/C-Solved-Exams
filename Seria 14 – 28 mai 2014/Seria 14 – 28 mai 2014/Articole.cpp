#include "Articole.h"
#include<string>
#include <vector>
#include <iostream>
using namespace std;

Articole::Articole():Referinta()
{
	
	this->nr_autori = 0;
	this->titlu_articol = "";
	this->an_publicare = 2020;
	this->nume_revista = "";
	this->nr_aparut_revista = 1;
	this->nr_pagini = 1;
}

int Articole::get_nr_autori() const
{
	return nr_autori;
}

void Articole::set_nr_autori(int nr_autori)
{
	this->nr_autori = nr_autori;
}

vector<string> Articole::get_nume() const
{
	return nume;
}

void Articole::set_nume(vector<string> basic_strings)
{
	nume = basic_strings;
}


string Articole::get_titlu_articol() const
{
	return titlu_articol;
}

void Articole::set_titlu_articol(string titlu_articol)
{
	this->titlu_articol = titlu_articol;
}

int Articole::get_an_publicare() const
{
	return an_publicare;
}

void Articole::set_an_publicare(int an_publicare)
{
	this->an_publicare = an_publicare;
}

string Articole::get_nume_revista() const
{
	return nume_revista;
}

void Articole::set_nume_revista(string nume_revista)
{
	this->nume_revista = nume_revista;
}

int Articole::get_nr_aparut_revista() const
{
	return nr_aparut_revista;
}

void Articole::set_nr_aparut_revista(int nr_aparut_revista)
{
	this->nr_aparut_revista = nr_aparut_revista;
}

int Articole::get_nr_pagini() const
{
	return nr_pagini;
}

void Articole::set_nr_pagini(int nr_pagini)
{
	this->nr_pagini = nr_pagini;
}
void Articole::citire()
{
	Referinta::citire();
	cout << "\nNr autori: ";
	cin >> this->nr_autori;
	cout << "\nAUTORI ";
	for (auto i : this->nume)
	{
		getchar();
		getline(std::cin, i);
	}
	cout << "\nTitlu carte: ";
	cin >> this->titlu_articol;
	cout << "\nAn publicare: ";
	cin >> this->an_publicare;
	cout << "\nNume revista: ";
	cin >> this->nume_revista;
	cout << "\nNr pagini: ";
	cin >> this->nr_pagini;
	cout << "\nNr curent al revistei: ";
	cin >> this->nr_aparut_revista;
}

void Articole::afisare()
{
	Referinta::afisare();
	cout << "\nNr autori: ";
	cout << this->nr_autori;
	cout << "\nAUTORI ";
	for (auto i : this->nume)
	{
		getchar();
		cout << i;
	}
	cout << "\nTitlu carte: ";
	cout << this->titlu_articol;
	cout << "\nAn publicare: ";
	cout << this->an_publicare;
	cout << "\nNume revista: ";
	cout << this->nume_revista;
	cout << "\nNr pagini: ";
	cout << this->nr_pagini;
	cout << "\nNr curent al revistei: ";
	cout << this->nr_aparut_revista;
}
