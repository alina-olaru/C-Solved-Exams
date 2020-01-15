#pragma once
#include "Contract.h"
#include "Istoric_proprietati.h"

class Firma
{
private:
	int nr_contracte;
	std::vector<Contract*> c;
	Istoric_proprietati istoric;
public:
	void citire();
	void afisare();
	void afisare_stare_imobile(int an, int luna, int zi);
};

