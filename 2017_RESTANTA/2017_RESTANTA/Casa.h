#pragma once
#include "Proprietate.h"
class Casa:public Proprietate
{
private:
	float suprafata_curte;
	int nr_niveluri;
public:

	float get_suprafata_curte() const;
	void set_suprafata_curte(float suprafata_curte);
	int get_nr_niveluri() const;
	void set_nr_niveluri(int nr_niveluri);
	void citire() override;
	void afisare() override;
};

