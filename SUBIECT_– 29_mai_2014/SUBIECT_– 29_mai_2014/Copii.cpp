#include "Copii.h"
using namespace std;
#include <string>
#include <vector>
#include<iostream>


void Copii::afisare()
{
	Pacient::afisare();
	cout << "\nNume familie parinti ";
	cout << this->nume_parinti;
	cout << "\nPreuna mama : ";
	cout << this->prenume_mama;
	cout << "\nPrenume tata: ";
	cout << this->prenume_tata;
	cout << "Nr de precendenti in cazul bolilor cardiovasculare (0) niciun parinte,1 parinte sau 2-ambii ";
	cout << this->nr_precedenti_cardiovascular;
	cout << "\nProteina: ";
	cout << this->proteina_reactiva.begin()->second;
	cout << "\nData ";
	cout << this->proteina_reactiva.begin()->first.get_f();
	cout << this->proteina_reactiva.begin()->first.get_s();
	cout << this->proteina_reactiva.begin()->first.get_t();
}

void Copii::citire()
{
	Pacient::citire();
	cout << "\nNume familie parinti ";
	cin >> this->nume_parinti;
	cout << "\nPreuna mama : ";
	cin >> this->prenume_mama;
	cout << "\nPrenume tata: ";
	cin >> this->prenume_tata;
	cout << "Nr de precendenti in cazul bolilor cardiovasculare (0) niciun parinte,1 parinte sau 2-ambii ";
	cin >> this->nr_precedenti_cardiovascular;
	
	int niv;
	cout << "\nProteine GRAME ";
	cin >> niv;
	int zi;
	int luna;
	int an;
	cout << "\nZi ";
	cin >> zi;
	cout << "\nLuna ";
	cin >> luna;
	cout << "\nAn: ";
	cin >> an;
	Data* a = new Data(zi,luna,an);
	this->proteina_reactiva.insert(make_pair(*a, niv));
	
	
}


Copii::Copii():Pacient()
{
	this->nume_parinti = "";
	this->prenume_mama = "";
	this->prenume_tata = "";
	this->nr_precedenti_cardiovascular = 0;
}

string Copii::get_nume_parinti() const
{
	return nume_parinti;
}

void Copii::set_nume_parinti(string nume_parinti)
{
	this->nume_parinti = nume_parinti;
}

string Copii::get_prenume_mama() const
{
	return prenume_mama;
}

void Copii::set_prenume_mama(string prenume_mama)
{
	this->prenume_mama = prenume_mama;
}

string Copii::get_prenume_tata() const
{
	return prenume_tata;
}

void Copii::set_prenume_tata(string prenume_tata)
{
	this->prenume_tata = prenume_tata;
}

int Copii::get_nr_precedenti_cardiovascular() const
{
	return nr_precedenti_cardiovascular;
}

void Copii::set_nr_precedenti_cardiovascular(int nr_precedenti_cardiovascular)
{
	this->nr_precedenti_cardiovascular = nr_precedenti_cardiovascular;
}

map<Data, int> Copii::get_proteina_reactiva() const
{
	return proteina_reactiva;
}

void Copii::set_proteina_reactiva(map<Data, int> proteina_reactiva)
{
	this->proteina_reactiva = proteina_reactiva;
}
