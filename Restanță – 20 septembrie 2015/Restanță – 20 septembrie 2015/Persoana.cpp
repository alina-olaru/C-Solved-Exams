#include "Persoana.h"
#include "Membru.h"

Persoana::Persoana()
{
	this->nume = "";
	this->prenume = "";
	this->cnp = "";
	this->nr_servicii = 0;
	this->nr_vizite = 1;
	this->adresa_mail = "";
	this->sex = 1;
}

string Persoana::get_nume() const
{
	return nume;
}

void Persoana::set_nume(string nume)
{
	this->nume = nume;
}

string Persoana::get_prenume() const
{
	return prenume;
}

void Persoana::set_prenume(string prenume)
{
	this->prenume = prenume;
}

string Persoana::get_cnp() const
{
	return cnp;
}

void Persoana::set_cnp(string cnp)
{
	this->cnp = cnp;
}

int Persoana::get_nr_vizite() const
{
	return nr_vizite;
}

void Persoana::set_nr_vizite(int nr_vizite)
{
	this->nr_vizite = nr_vizite;
}

int Persoana::get_nr_servicii() const
{
	return nr_servicii;
}

void Persoana::set_nr_servicii(int nr_servicii)
{
	this->nr_servicii = nr_servicii;
}

string Persoana::get_adresa_mail() const
{
	return adresa_mail;
}

void Persoana::set_adresa_mail(string adresa_mail)
{
	this->adresa_mail = adresa_mail;
}

int Persoana::get_sex() const
{
	return sex;
}

void Persoana::set_sex(int sex)
{
	this->sex = sex;
}

void Persoana::afisare()
{
	cout << "\nNume: ";
	cout << this->nume;
	cout << "\nPrenume ";
	cout << this->prenume;
	cout << "\ncnp";
	cout << this->cnp;
	cout << "\nNr vizite: ";
	cout <<  nr_vizite;
	if(this->nr_vizite>=2)
	{
		cout << this->adresa_mail;
	}
	cout << "Sex ";
	if(this->sex==1)
	{
		cout << "feminin";
	}
	if(this->sex==2)
	{
		cout << "masculin";
	}
	cout << endl;
}




void Persoana::citire()
{
	cout << "\nNume: ";
	cin >> this->nume;
	cout << "\nPrenume ";
	cin >> this->prenume;
	cout << "\ncnp";
	cin >> this->cnp;
	if (typeid(*this) != typeid(Membru)) {
		cout << "E prima data cand vii sau ai mai fost?(0-prima,1-am mai fost)";


		int ch;
		cin >> ch;
		if (ch = 0)
		{
			this->nr_vizite = 1;
		}
		if (ch = 1) {
			
			this->nr_vizite++;
			if (nr_vizite >= 2)
			{
				cout << "\nCate servicii ai? ";
				cin >> this->nr_servicii;
				cout << "\nAdresa mail: " << endl;
				cin >> this->adresa_mail;
			}
		}
	}
	cout << "\n1)feminin,2)masculin";
	cin >> this->sex;
}
