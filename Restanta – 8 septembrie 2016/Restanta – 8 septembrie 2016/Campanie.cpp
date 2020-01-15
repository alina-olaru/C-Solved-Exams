#include "Campanie.h"
#include <iostream>
#include "Cursa_temporara.h"
using namespace std;

//Folosind singleton pattern
Campanie* Campanie::instance = NULL;

Campanie* Campanie::get_instance()
{
	if(instance==NULL)
	{
		instance = new Campanie;
	}
	return instance;
}

void Campanie::citire()
{
	std::cout << "nr de containere din baza de date: ";
	std::cin >> this->nr_containere;
	for(int j=0;j<this->nr_containere;j++)
	{
		Container* c = new Container();
		c->citire();
		this->segmente_zbor.push_back(c);
	}
	
}

void Campanie::afisare()
{
	std::cout << "nr de containere din baza de date: ";
	std::cout << this->nr_containere;
	for(auto i:this->segmente_zbor)
	{
		i->afisare();
	}
	
}


Campanie::Campanie()
{
	this->nr_containere = 1;
}

int Campanie::get_nr_containere() const
{
	return nr_containere;
}

void Campanie::set_nr_containere(int nr_containere)
{
	this->nr_containere = nr_containere;
}

std::vector<Container*> Campanie::get_segmente_zbor() const
{
	return segmente_zbor;
}

void Campanie::set_segmente_zbor(std::vector<Container*> segmente_zbor)
{
	this->segmente_zbor = segmente_zbor;
}

void Campanie::adaugare_ruta_noua()
{

	Container* c = new Container();
	c->citire();
	this->segmente_zbor.push_back(c);
	
}

void Campanie::adaugare_cursa_pe_ruta()
{
	afisare();
	cout << "\nintroduceti id-ul";
	int idd; cin >> idd;
	this->segmente_zbor.at(idd)->adaugare_zbor();
}
bool Campanie::check(int day, int month, int year, int startDay, int startMonth, int startYear, int endDay,int endMonth, int endYear)
{
	int entry = (year * 10000) + (month * 100) + day;
	int start = (startYear * 10000) + (startMonth * 100) + startDay;
	int end = (endYear * 10000) + (endMonth * 100) + endDay;

	if (entry >= start && entry <= end) {
		return true;
	}
	else {
		return false;
	}
}

void Campanie::afisare_intre_2_date(int zi1,int luna1,int an1,int zi2,int luna2,int an2)
{
	


	for (auto y : this->segmente_zbor)
	{

		for(Zbor* a:y->get_zboruri())
		{
			if(check(a->get_data_inregistrare().get_first(),
			a->get_data_inregistrare().get_second(),
			a->get_data_inregistrare().get_third(),
				zi1,luna1,an1,
				zi2,luna2,an2)==true)
			{
				a->afisare();
			}
		}
	}
}

void Campanie::curse_active(int zi_data, int luna_data)
{
	for (auto y : this->segmente_zbor)
	{
		if (typeid(*y) == typeid(Cursa_temporara)) {
			
			for (Zbor* a : y->get_zboruri())
			{
				if ((a->get_data_inregistrare().get_second() == luna_data)&&(a->get_data_inregistrare().get_first() +
					dynamic_cast<Cursa_temporara*>(a)->get_perioada_activa() <=zi_data))
				{
					a->afisare();
				}
				else if((a->get_data_inregistrare().get_second()<=luna_data)&&(a->get_data_inregistrare().get_first()
									+
						dynamic_cast<Cursa_temporara*>(a)->get_perioada_activa() <=zi_data))
				{
					a->afisare();
				}
					
			}
		}
	}
	
	
}

void Campanie::afis_fara_discount()
{

	for (auto y : this->segmente_zbor)
	{

		for (Zbor* a : y->get_zboruri())
		{
			if(a->get_reducere()!=1)
			{
				a->afisare();
			}
		}
	}
}

	

	
