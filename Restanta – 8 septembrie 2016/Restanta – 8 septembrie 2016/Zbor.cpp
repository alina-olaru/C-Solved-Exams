#include "Zbor.h"
#include <iostream>
using namespace std;

float Zbor::get_pret() const
{
	return pret;
}

void Zbor::set_pret(float pret)
{
	this->pret = pret;
}

float Zbor::get_reducere() const
{
	return reducere;
}

void Zbor::set_reducere(float reducere)
{
	this->reducere = reducere;
}

Zbor::Zbor()
{
	this->data_inregistrare = Data(1, 2, 2000);
	this->reducere = 1;
	this->pret = 100;
	this->id_zbor = ID++;
}

int Zbor::get_id_zbor() const
{
	return id_zbor;
}

void Zbor::set_id_zbor(int id_zbor)
{
	this->id_zbor = id_zbor;
}

Data Zbor::get_data_inregistrare() const
{
	return data_inregistrare;
}

void Zbor::set_data_inregistrare(Data data_inregistrare)
{
	this->data_inregistrare = data_inregistrare;
}

void Zbor::afisare()
{
	std::cout << "\nid: " << this->id_zbor;
	cout << "\ndata: ";
	cout << this->data_inregistrare.get_first() << "- " << this->data_inregistrare.get_second() << "-" << this->data_inregistrare.get_third() << endl;
	cout << "\npretul de vanzare este: " << this->pret << " la care se aplica o reducere de : " << this->reducere * 100 << "%" << endl;
}
void Zbor::citire()
{
	cout << "\ndata: ";
	int zi;
	int luna;
	int an;
	cout << "\nZi ";
	cin >> zi;
	cout << "\nLuna ";
	cin >> luna;
	cout << "\nAn: ";
	cin >> an;
	Data* a = new Data(zi, luna, an);
	this->data_inregistrare = *a;
	cout << "\npret pe bilet: ";
	cin >> this->pret;
	cout << "\se aplica reducere?0-nu,1-da ";
	int ch=1;
	cin >> ch;
	switch(ch)
	{
	case 0:
		{
		this->reducere = 1;
		break;
		}
	case 1:
		{
		cout << "Cat la suta? ";
		int procent=1;
		cin >> procent;
		this->reducere = procent / 100;
		break;
		}
	}
}
