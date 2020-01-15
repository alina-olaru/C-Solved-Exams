#include "Angajat_base.h"

Angajat_base::Angajat_base()
{
	this->nume = "";
	this->prenume = "";
	this->hire_date = Data(1, 1, 2000);
	this->cnp = "123456789101";
	
}

string Angajat_base::get_nume() const
{
	return nume;
}

void Angajat_base::set_nume(string nume)
{
	this->nume = nume;
}

string Angajat_base::get_prenume() const
{
	return prenume;
}

void Angajat_base::set_prenume(string prenume)
{
	this->prenume = prenume;
}

string Angajat_base::get_cnp() const
{
	return cnp;
}

void Angajat_base::set_cnp(string cnp)
{
	this->cnp = cnp;
}

Data Angajat_base::get_hire_date() const
{
	return hire_date;
}

void Angajat_base::set_hire_date(Data hire_date)
{
	this->hire_date = hire_date;
}

string Angajat_base::get_functie() const
{
	return functie;
}

void Angajat_base::set_functie(string functie)
{
	this->functie = functie;
}

void Angajat_base::citire()
{
	cout << "\nnume: ";
	cin >> this->nume;
	cout << "\nprenume: ";
	cin >> this->prenume;
	cout << "\ncnp ";
	cin >> this->cnp;
	cout << "\nsata angajarii: ";
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

void Angajat_base::afisare()
{

	cout << "\nnume: ";
	cout << this->nume;
	cout << "\nprenume: ";
	cout << this->prenume;
	cout << "\ncnp ";
	cout << this->cnp;
	cout << "\nsata angajarii: ";
	cout << this->hire_date.get_first()<<"- "<<this->hire_date.get_second()<<"-"<<this->hire_date.get_third()<<endl;
	
}
