#pragma once

#include <vector>
#include "Angajat_base.h"
using namespace std;
#include<iostream>
#include<typeinfo>
#include <string>



class Ang_temp:public Angajat_base 
{
private:
	float tarif_ora;
	Data data_term_contract;
	vector<float> nr_ore_lucrate;
public:



	Ang_temp();
	Ang_temp(string nume, string prenume, string cnp, Data hire_date, string functie, float tarif_ora,
		Data data_term_contract, vector<float> nr_ore_lucrate)
		: Angajat_base(nume, prenume, cnp, hire_date, functie),
		  tarif_ora(tarif_ora),
		  data_term_contract(data_term_contract),
		  nr_ore_lucrate(nr_ore_lucrate)
	{
	}





	float get_tarif_ora() const;
	void set_tarif_ora(float tarif_ora);
	Data get_data_term_contract() const;
	void set_data_term_contract(Data data_term_contract);
	vector<float> get_nr_ore_lucrate() const;
	void set_nr_ore_lucrate(vector<float> nr_ore_lucrate);
	void citire() override;
	void afisare() override;
};

