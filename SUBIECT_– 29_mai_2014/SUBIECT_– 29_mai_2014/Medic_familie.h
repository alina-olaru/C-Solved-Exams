#pragma once
#include "Pacient.h"
using namespace std;
#include <string>
#include <vector>
#include<iostream>
class Medic_familie
{
private:
	int nr_pacienti;
	vector<Pacient*> pacienti;
public:
	void citire();
	void afisare();

	Medic_familie();


	int get_nr_pacienti() const;

	void set_nr_pacienti(int nr_pacienti);

	vector<Pacient*> get_pacienti1() const;

	void set_pacienti1(vector<Pacient*> pacienti);

	Medic_familie(int nr_pacienti, vector<Pacient*> pacienti)
		: nr_pacienti(nr_pacienti),
		  pacienti(pacienti)
	{
	}

	vector<Pacient> get_pacienti() const;
	void set_pacienti(vector<Pacient> pacienti);
	void afisare_adulti_risc();
	void afisare_copii_risc();
	void afisare_dupa_nume(string nume);
	void afis_cerinta();
	
};

