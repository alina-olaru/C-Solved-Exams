#include "Membru.h"

float Membru::get_total_cheltuieli() const
{
	return total_cheltuieli;
}

void Membru::set_total_cheltuieli(float total_cheltuieli)
{
	this->total_cheltuieli = total_cheltuieli;
}

Membru::Membru():Persoana()
{
	this->procent_plafon_minim = 1;
	this->tip_apartenenta = 1;
	this->total_cheltuieli = 0;
}

int Membru::get_tip_apartenenta() const
{
	return tip_apartenenta;
}

void Membru::set_tip_apartenenta(int tip_apartenenta)
{
	this->tip_apartenenta = tip_apartenenta;
}

float Membru::get_procent_plafon_minim() const
{
	return procent_plafon_minim;
}

void Membru::set_procent_plafon_minim(float procent_plafon_minim)
{
	this->procent_plafon_minim = procent_plafon_minim;
}

void Membru::citire()
{
	Persoana::citire();
	cout << "\nPremium(1), Gold(2) și Silver(3) ";
	cin >> this->tip_apartenenta;
	if(this->get_sex()==1)
	{
		this->procent_plafon_minim = 0.8;
	}
	else
	{
		this->procent_plafon_minim = 1;
	}
	cout << "Cat ai cheltuit ? ";
	cin >> this->total_cheltuieli;
}

void Membru::afisare()
{
	Persoana::afisare();
	if (this->tip_apartenenta == 1) {
		cout << endl << "PREMIUM" << endl;
		cout << "Plafon minim " << this->procent_plafon_minim * plafon_premium;
	}
	if (this->tip_apartenenta == 3) {
		cout << endl << "SILVER" << endl;

		cout << "Plafon minim " << this->procent_plafon_minim * plafon_silver;
	}
	if (this->tip_apartenenta == 2) {
		cout << endl << "gold" << endl;

		cout << "Plafon minim " << this->procent_plafon_minim * plafon_gold;
	}
	cout << endl << "Cheltuieli " << this->total_cheltuieli;
}
