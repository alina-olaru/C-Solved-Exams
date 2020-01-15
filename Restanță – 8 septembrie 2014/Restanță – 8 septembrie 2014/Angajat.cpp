#include "Angajat.h"
#include "TESA.h"
#include "LUCRATIV.h"
#include "Angajati_ora.h"

string Angajat::get_nume() const
{
	return nume;
}

void Angajat::set_nume(string nume)
{
	this->nume = nume;
}

string Angajat::get_prenume() const
{
	return prenume;
}

void Angajat::set_prenume(string prenume)
{
	this->prenume = prenume;
}

int Angajat::get_tip_contract() const
{
	return tip_contract;
}

void Angajat::set_tip_contract(int tip_contract)
{
	this->tip_contract = tip_contract;
}

int Angajat::get_tip_lucrativ() const
{
	return tip_lucrativ;
}

void Angajat::set_tip_lucrativ(int tip_lucrativ)
{
	this->tip_lucrativ = tip_lucrativ;
}

Data Angajat::get_hire_date() const
{
	return hire_date;
}

void Angajat::set_hire_date(Data hire_date)
{
	this->hire_date = hire_date;
}


/*	string nume;
	string prenume;
	int tip_contract;
	int tip_lucrativ;
    Data hire_date;*/
void Angajat::citire()
{
	cout << "\nNume: ";
	cin >> this->nume;
	cout << "\nPrenume ";
	cin >> this->prenume;

	if((typeid(*this)==typeid(TESA))||(typeid(*this)==typeid(LUCRATIV)))
	{
		this->tip_contract = 1;
	}
	if (typeid(*this) == typeid(Angajati_ora)) {
		this->tip_contract = 2;
	}

	if ((typeid(*this) == typeid(TESA)))
	{
		this->tip_lucrativ=2;
	}

	if ((typeid(*this) == typeid(LUCRATIV)))
	{
		this->tip_lucrativ = 1;
	}
	//cout << "\nLucrativ (1) sau tesa(2) ";
	
	cout << "Data de intrare in vigoare a contractului : ";
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
	this->hire_date = *a;
}


void Angajat::afisare()
{

	cout << "\nNume: ";
	cout << this->nume;
	cout << "\nPrenume ";
	cout << this->prenume;
	cout << "Tip contract-permanent 1,in plata cu ora 2 ";;
	cout << this->tip_contract;
	cout << "\nLucrativ (1) sau tesa(2) ";
	cout << this->tip_lucrativ;
	cout << "Data de intrare in vigoare a contractului : ";
	cout << this->hire_date.get_f();
	cout << this->hire_date.get_s();
	cout << this->hire_date.get_t();
}
	

