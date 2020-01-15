#pragma once
#include <vector>
#include "Pizza.h"
#include "Bautura.h"

class OfSpec
{
private:
	std::vector<Pizza*>sortiment_pizza;
	vector<Bautura*> bautura;
	int nr_oferte_cumparate;
public:
	OfSpec();
	OfSpec(std::vector<Pizza*> sortiment_pizza, vector<Bautura*> bauturas, int nr_oferte_cumparate)
		: sortiment_pizza(std::move(sortiment_pizza)),
		  bautura(std::move(bauturas)),
		  nr_oferte_cumparate(nr_oferte_cumparate)
	{
	}

	std::vector<Pizza*> get_sortiment_pizza() const;
	void set_sortiment_pizza(std::vector<Pizza*> sortiment_pizza);
	vector<Bautura*> get_bautura() const;
	void set_bautura(vector<Bautura*> bauturas);
	int get_nr_oferte_cumparate() const;
	void set_nr_oferte_cumparate(int nr_oferte_cumparate);
	void citire();
	void afisare();
	void afis_ingrediente();
	void afis_spec();
	void afis_basic();
	void afis_comp_cu_nr_ingr();
	void afis_comp_cu_nr_ingr(Pizza* a);
	void afis_castig_oferta_Spec();

};

