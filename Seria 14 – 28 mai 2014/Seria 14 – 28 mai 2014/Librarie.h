#pragma once
#include "Referinta.h"
#include <vector>
#include <iostream>
#include<string>
#include <vector>
#include <iostream>
using namespace std;
class Librarie
{
private:
	int nr_referinte;
	std::vector<Referinta*> referinte;
public:

	int get_nr_referinte() const;
	void set_nr_referinte(int nr_referinte);
	Librarie();


	Librarie(int nr_referinte, std::vector<Referinta*> referintas)
		: nr_referinte(nr_referinte),
		  referinte(referintas)
	{
	}

	int get_nr_referinte1() const;
	void set_nr_referinte1(int nr_referinte);
	std::vector<Referinta*> get_referinte() const;
	void set_referinte(std::vector<Referinta*> referintas);
	void citire();
	void afisare();
	void afis_dupa_an(int an);
	void afis_elect(string a);
	void afis_elect();
};

