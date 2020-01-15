#pragma once
#include "Proprietate.h"
#include <vector>

class Istoric_proprietati

{
private:
	int nr_prop;
	std::vector<Proprietate*> proprietati_totale;
public:
	void citire();
	void afisare();
	void afisare_stare_imobile(int an, int luna, int zi);

	int get_nr_prop() const;
	void set_nr_prop(int nr_prop);
	std::vector<Proprietate*> get_proprietati_totale() const;
	void set_proprietati_totale(std::vector<Proprietate*> proprietati_totale);
};

