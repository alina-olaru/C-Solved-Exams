#pragma once
#include "Proprietate.h"

class Apartament:public Proprietate
{
private:
	int nr_camere;
	int etaj;
public:

	int get_nr_camere() const;
	void set_nr_camere(int nr_camere);
	int get_etaj() const;
	void set_etaj(int etaj);
	void citire() override;
	void afisare() override;
};

