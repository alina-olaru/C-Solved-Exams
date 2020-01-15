#include "Angajat.h"
#include <iostream>
#include "Comanda_onlinw.h"
#include "ComSpec.h"
using namespace std;

int Angajat::get_sex() const
{
	return sex;
}

void Angajat::set_sex(int sex)
{
	this->sex = sex;
}

vector<Comanda*> Angajat::get_comenzi() const
{
	return comenzi;
}

void Angajat::set_comenzi(vector<Comanda*> comandas)
{
	comenzi = comandas;
}

Angajat::Angajat()
{
	
		this->nume = "Alina";
		this->ani_vechime = 10;
		this->salariu = 1500000;
		this->bonus = 600;
		this->suma_incasata_comenzi = 10000;
		this->nr_comenzi = 100;
		this->sex = 1;
	
}

int Angajat::get_nr_comenzi() const
{
	return nr_comenzi;
}

void Angajat::set_nr_comenzi(int nr_comenzi)
{
	this->nr_comenzi = nr_comenzi;
}

float Angajat::get_suma_incasata_comenzi() const
{
	return suma_incasata_comenzi;
}

void Angajat::set_suma_incasata_comenzi(float suma_incasata_comenzi)
{
	this->suma_incasata_comenzi = suma_incasata_comenzi;
}

std::string Angajat::get_nume() const
{
	return nume;
}

void Angajat::set_nume(std::string nume)
{
	this->nume = nume;
}

int Angajat::get_ani_vechime() const
{
	return ani_vechime;
}

void Angajat::set_ani_vechime(int ani_vechime)
{
	this->ani_vechime = ani_vechime;
}

float Angajat::get_salariu() const
{
	return salariu;
}

void Angajat::set_salariu(float salariu)
{
	this->salariu = salariu;
}

float Angajat::get_bonus() const
{
	return bonus;
}

void Angajat::set_bonus(float bonus)
{
	this->bonus = bonus;
}

/*	std::string nume;
	int ani_vechime;
	float salariu;
	float bonus;
	int nr_comenzi;
	float suma_incasata_comenzi;*/


void Angajat::citire()
{
	std::cout << "\nNume: ";
	std::cin >> this->nume;
	cout << "\nAni vechime ";
	cin >> this->ani_vechime;
	cout << "\nSalariu: ";
	cin >> this->salariu;
	cout << "\nbonus ";
	cin >> this->bonus;
	cout << "\nNr comenzi ";
	cin >> this->nr_comenzi;
	for(int i=0;i<nr_comenzi;i++)
	{
		Comanda* c = new Comanda();
		c->citire_produs_comandat();
		this->comenzi.push_back(c);
	}
	
}

void Angajat::afis()
{
	std::cout << "\nNume: ";
	std::cout << this->nume;
	cout<< "\nAni vechime ";
	cout << this->ani_vechime;
	cout << "\nSalariu: ";
	cout << this->salariu;
	cout << "\nbonus ";
	cout << this->bonus;
	cout << "\nNr comenzi ";
	cout << this->nr_comenzi;
	for (auto y : this->get_comenzi())
	{
		y->afis();
	}
	
}

void Angajat::citire_cerinta()
{
	std::cout << "\nNume: ";
	std::cin >> this->nume;
	cout << "\nAni vechime ";
	cin >> this->ani_vechime;
	cout << "\nSalariu: ";
	cin >> this->salariu;
	cout << "\nbonus ";
	cin >> this->bonus;
	cout << "\nNr comenzi ";
	cin >> this->nr_comenzi;
	for (int i = 0; i < nr_comenzi; i++)
	{
		cout << "\n1)comanda normala(in rest.\n2)Comanda online\n3)Comanda speciala\n";
		int ch;
		cin >> ch;
		switch (ch) {
		case 1: {
			Comanda* c = new Comanda();
			c->citire_produs_comandat();
			this->comenzi.push_back(c);
			break;
		}
		case 2:
			{
			Comanda_onlinw* c = new Comanda_onlinw();
			c->citire_produs_comandat();
			this->comenzi.push_back(c);
			break;
			}
		case 3:
			{
			ComSpec* c = new ComSpec();
			c->citire_produs_comandat();
			this->comenzi.push_back(c);
			break;
			}
		}
	}
}

void Angajat::afisare_data()
{
	for(auto y:this->get_comenzi())
	{
		if((y->get_an()==2015)&&(y->get_luna()==5)&&(y->get_zi()==31))
		{
			y->afis();
		}
	}
}

void Angajat::cautare_papanasi()
{
	int nr = 0;

	for (auto y : this->get_comenzi())
	{
		if ((y->get_an() == 2015) && (y->get_luna() == 5))
		{
			for(auto a:y->get_produs_comandat())
			{
			char* c = new char[a.get_denumire().length()];
				
				for(int i=0;i<a.get_denumire().length();++i)
				{
					c[i] = std::toupper(a.get_denumire()[i]);
				}
				const char* p = "PAPANASI";
				if(p==c)
				{
					y->afis();
				}
			}
		}
	}
	cout << "S-au cumparat " << nr << " papanasi";
}

void Angajat::afis_procent()
{
	float suma_online = 0;
	float suma_totala = 0;
	for(auto y:this->get_comenzi())
	{
		if ((y->get_an() == 2015) && (y->get_luna() == 5))
		{
			suma_totala = suma_totala + y->nota_plata();
			if(typeid(*y)==typeid(Comanda_onlinw))
			{
				suma_online = suma_online + y->nota_plata();
			}
		}
		
	}
	cout << suma_online / suma_totala;
}

bool operator<(const Angajat& lhs, const Angajat& rhs)
{
	float s1 = 0;
	float s2 = 0;
	for(auto y:lhs.get_comenzi())
	{
		s1 = s1 + y->nota_plata();
	}
	for (auto y : rhs.get_comenzi())
	{
		s2 = s2 + y->nota_plata();
	}
	return s1 > s2;
}

bool operator>(const Angajat& lhs, const Angajat& rhs)
{
	float s1 = 0;
	float s2 = 0;
	for (auto y : lhs.get_comenzi())
	{
		s1 = s1 + y->nota_plata();
	}
	for (auto y : rhs.get_comenzi())
	{
		s2 = s2 + y->nota_plata();
	}
	return s2 > s1;

}
std::ostream& operator<<(std::ostream& out, Angajat& ang)
{
	out << "\nNume: ";
	out << ang.get_nume();
	out << "\nAni vechime ";
	out << ang.get_ani_vechime();
	out << "\nSalariu: ";
	out << ang.get_salariu();
	out << "\nbonus ";
	out << ang.get_bonus();
	out << "\nNr comenzi ";
	out << ang.get_nr_comenzi();
	return out;
}

bool operator==(const Angajat& a, const Angajat& b)
{
	float s1 = 0;
	float s2 = 0;
	for (auto y : a.get_comenzi())
	{
		s1 = s1 + y->nota_plata();
	}
	for (auto y : b.get_comenzi())
	{
		s2 = s2 + y->nota_plata();
	}
	return s2 = s1;
}

bool operator!=(const Angajat& a, const Angajat& b)
{
	float s1 = 0;
	float s2 = 0;
	for (auto y : a.get_comenzi())
	{
		s1 = s1 + y->nota_plata();
	}
	for (auto y : b.get_comenzi())
	{
		s2 = s2 + y->nota_plata();
	}
	return s2 != s1;
	
}
