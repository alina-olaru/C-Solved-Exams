#include "Carti.h"
#include<string>
#include <vector>
#include <iostream>
using namespace std;

int Carti::get_nr_autori() const
{
	return nr_autori;
}

void Carti::set_nr_autori(int nr_autori)
{
	this->nr_autori = nr_autori;
}

vector<string> Carti::get_autori() const
{
	return autori;
}

void Carti::set_autori(vector<string> basic_strings)
{
	autori = basic_strings;
}


string Carti::get_titlu_carte() const
{
	return titlu_carte;
}

void Carti::set_titlu_carte(string titlu_carte)
{
	this->titlu_carte = titlu_carte;
}

int Carti::get_an_publicare() const
{
	return an_publicare;
}

void Carti::set_an_publicare(int an_publicare)
{
	this->an_publicare = an_publicare;
}

string Carti::get_nume_editura() const
{
	return nume_editura;
}

void Carti::set_nume_editura(string nume_editura)
{
	this->nume_editura = nume_editura;
}

string Carti::get_oras_publicare() const
{
	return oras_publicare;
}

void Carti::set_oras_publicare(string oras_publicare)
{
	this->oras_publicare = oras_publicare;
}


Carti::Carti():Referinta()
{
	

	this->nr_autori = 1;

	this->titlu_carte = "";
	this->an_publicare = 2000;

	this->oras_publicare = "";
}

void Carti::afisare()
{
	Referinta::afisare();
	cout << "\nNr autori: ";
	cout << this->nr_autori;
	cout << "\nAUTORI ";
	for(auto i:this->autori)
	{
		cout << i << endl;
	}
	cout << "\nTitlu carte: ";
	cout << this->titlu_carte;
	cout << "\nAn publicare: ";
	cout << this->an_publicare;
	cout << "\nOras publicare: ";
	cout << this->oras_publicare;
	cout << "\nNume editura: ";
	cout<< this->nume_editura;
}

void Carti::citire()
{ 
	Referinta::citire();
	cout << "\nNr autori: ";
	cin >> this->nr_autori;
	cout << "\nAUTORI ";
	getchar();
	for (int i=0;i<this->nr_autori;i++)
	{
		
		string nume;
		getline(std::cin, nume);
		this->autori.push_back(nume);
	}
	cout << "\nTitlu carte: ";
	cin >> this->titlu_carte;
	cout << "\nAn publicare: ";
	cin >> this->an_publicare;
	cout << "\nOras publicare: ";
	cin >> this->oras_publicare;
	cout << "\nNume editura: ";
	cin >> this->nume_editura;
}
