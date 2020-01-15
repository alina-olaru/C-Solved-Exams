#pragma once
#include <iostream>
#include <map>
#include "Angajat.h"
#include "Comanda.h"
#include <vector>

class Restaurant
{
private:
	int nr_beneficiari_bonus;
	int nr_angajati;
	map<Angajat, vector<Comanda>> ang;
public:

	Restaurant();
	int get_nr_beneficiari_bonus() const;

	void set_nr_beneficiari_bonus(int nr_beneficiari_bonus);

	int get_nr_angajati() const;

	void set_nr_angajati(int nr_angajati);

	std::map<Angajat, vector<Comanda>> get_ang() const;

	void set_ang(std::map<Angajat, vector<Comanda>> pairs);

	Restaurant(int nr_beneficiari_bonus, int nr_angajati, std::map<Angajat, vector<Comanda>> pairs)
		: nr_beneficiari_bonus(nr_beneficiari_bonus),
		  nr_angajati(nr_angajati),
		  ang(pairs)
	{
	}


	void citire();
	void afis();
	void get_beneficiari();
};

