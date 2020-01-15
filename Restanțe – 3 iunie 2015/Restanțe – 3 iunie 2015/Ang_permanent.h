#pragma once


#include <vector>
#include "Angajat_base.h"
using namespace std;
#include<iostream>
#include<typeinfo>
#include <string>



class Ang_permanent:public Angajat_base 
{
private:
	float salariu_fix;
	float procent_bonus;
	vector<float> istoric_bonusuri;
public:

	Ang_permanent();
	float get_salariu_fix() const;

	void set_salariu_fix(float salariu_fix);

	float get_procent_bonus() const;

	void set_procent_bonus(float procent_bonus);

	vector<float> get_istoric_bonusuri() const;

	void set_istoric_bonusuri(vector<float> istoric_bonusuri);



	Ang_permanent(string nume, string prenume, string cnp, Data hire_date, string functie, float salariu_fix,
		float procent_bonus, vector<float> istoric_bonusuri)
		: Angajat_base(nume, prenume, cnp, hire_date, functie),
		  salariu_fix(salariu_fix),
		  procent_bonus(procent_bonus),
		  istoric_bonusuri(istoric_bonusuri)
	{
	}
	void citire() override;
	void afisare() override;
};

