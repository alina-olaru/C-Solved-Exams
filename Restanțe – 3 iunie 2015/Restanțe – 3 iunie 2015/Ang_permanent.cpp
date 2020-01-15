#include "Ang_permanent.h"

Ang_permanent::Ang_permanent():Angajat_base()
{
	this->salariu_fix = 10000;
	this->procent_bonus = 2;
}

float Ang_permanent::get_salariu_fix() const
{
	return salariu_fix;
}

void Ang_permanent::set_salariu_fix(float salariu_fix)
{
	this->salariu_fix = salariu_fix;
}

float Ang_permanent::get_procent_bonus() const
{
	return procent_bonus;
}

void Ang_permanent::set_procent_bonus(float procent_bonus)
{
	this->procent_bonus = procent_bonus;
}

vector<float> Ang_permanent::get_istoric_bonusuri() const
{
	return istoric_bonusuri;
}

void Ang_permanent::set_istoric_bonusuri(vector<float> istoric_bonusuri)
{
	this->istoric_bonusuri = istoric_bonusuri;
}

void Ang_permanent::citire()
{
	Angajat_base::citire();
	cout << "\nsalariul lunar fix(contractual) :";
	cin >> this->salariu_fix;
	cout << "\nmaximul pe care il poate avea bonusul este: ";
	cin >> this->procent_bonus;

	cout << "\nAnul in care va aflati : " << endl;
	int ann;
	cin >> ann;


	cout << "\nne intereseaza doar anul curent.introduceti de la tastatura indicele lunii in care va aflati(ex. martie=3";
	int index = -1;
	cin >> index;
	if (ann == this->get_hire_date().get_third())
	{
		index = index - this->get_hire_date().get_second() + 1;
	}
	for (int i = 0; i < index; i++)
	{
		cout << "Introduceti bonusul " << endl;
		float bonus;
		cin >> bonus;
		this->istoric_bonusuri.push_back(bonus);
	}

	
	
}

void Ang_permanent::afisare()
{
	cout << endl << "PERMANENT" << endl;

	cout << "\nsalariul lunar fix(contractual) :";
	cout << this->salariu_fix;
	cout << "\nmaximul pe care il poate avea bonusul este: ";
	cout << this->procent_bonus;
	cout << "\nBonusurile primite pana in prezent: ";
	int i = 1;
	for(auto y:this->istoric_bonusuri)
	{
		cout << "Luna " <<i<<" "<<y << endl;
		i++;
	}


}
