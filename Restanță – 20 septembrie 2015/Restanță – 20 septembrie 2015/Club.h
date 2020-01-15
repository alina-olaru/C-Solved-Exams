#pragma once
#include "Persoana.h"

class Club
{
public:
	int nr_pers;
	vector<Persoana*> pers;
public:
	Club();
	int get_nr_pers() const;

	void set_nr_pers(int nr_pers);


	vector<Persoana*> get_pers1() const;
	void set_pers1(vector<Persoana*> persoanas);
	vector<Persoana*> get_pers() const;
	void set_pers(vector<Persoana*> persoanas);
	void citire();
	void afisare();
	void afis_cerinta();
	void afis_brosura();
	void afis_party();
	void afis_pierdere_membru();
	void cumpara_serviciu();
};

