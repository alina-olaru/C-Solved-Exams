#include "Container.h"
#include <iostream>
#include "Cursa_temporara.h"
using namespace std;
Container::Container()
{
	this->pret_clasa_economic = 1;
	this->nr_curse = 1;
	this->id_container = id_cont++;
	
}

std::vector<Zbor*> Container::get_zboruri() const
{
	return zboruri;
}

void Container::set_zboruri(std::vector<Zbor*> zboruri)
{
	this->zboruri = zboruri;
}

int Container::get_nr_curse() const
{
	return nr_curse;
}

void Container::set_nr_curse(int nr_curse)
{
	this->nr_curse = nr_curse;
}

float Container::get_pret_clasa_economic() const
{
	return pret_clasa_economic;
}

void Container::set_pret_clasa_economic(float pret_clasa_economic)
{
	this->pret_clasa_economic = pret_clasa_economic;
}

std::unordered_map<std::string, std::string> Container::get_ruta() const
{
	return ruta;
}

void Container::set_ruta(std::unordered_map<std::string, std::string> pairs)
{
	ruta = pairs;
}

void Container::afisare()
{
	cout << endl << this->id_container << endl;
	cout << "\nruta: ";
	for(auto x:this->ruta)
	{
		cout << endl << x.first << "-" << x.second << endl;
	}
	cout << "\nnr curse: " << this->nr_curse;
	for(auto a:this->zboruri)
	{
		a->afisare();
	}
}

void Container::citire()
{
	std::cout << "\nruta: ";
	string a;
	string b;
	cin >> a >> b;
	this->ruta.insert(make_pair(a, b));
	cout << "Cate zboruri sunt inregistrate? ";
	int nr_zb;
	cin >> nr_zb;
	cout << "Cate curse se asigura: ";
	cin >> this->nr_curse;
	for(int i=0;i<nr_zb;i++)
	{
		cout << "\n1)temporar \n2)normal\n";
		int ch;
		cin >> ch;
		switch(ch)
		{
		case 1:
			{
			Cursa_temporara* t = new Cursa_temporara();
			t->citire();
			this->zboruri.push_back(t);
			break;
			}

		case 2:
			{
			Zbor* t = new Zbor();
			t->citire();
			this->zboruri.push_back(t);
			break;
			}
		}
	}
	
	
}

void Container::adaugare_zbor()
{
	cout << "\n1)temporar \n2)normal\n";
	int ch;
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		Cursa_temporara* t = new Cursa_temporara();
		t->citire();
		this->zboruri.push_back(t);
		break;
	}

	case 2:
	{
		Zbor* t = new Zbor();
		t->citire();
		this->zboruri.push_back(t);
		break;
	}
	}
}
