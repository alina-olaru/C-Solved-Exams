#pragma once
#include "Zbor.h"
#include <vector>
#include "Container.h"

class Campanie
{
	static Campanie* instance;
	int nr_containere;
	std::vector<Container*> segmente_zbor;
public:
	static Campanie* get_instance();
	void citire();
	void afisare();
	Campanie();
	int get_nr_containere() const;

	void set_nr_containere(int nr_containere);

	std::vector<Container*> get_segmente_zbor() const;

	void set_segmente_zbor(std::vector<Container*> segmente_zbor);

	Campanie(int nr_containere, std::vector<Container*> segmente_zbor)
		: nr_containere(nr_containere),
		  segmente_zbor(segmente_zbor)
	{
	}

	void adaugare_ruta_noua();
	void adaugare_cursa_pe_ruta();
	bool check(int day, int month, int year, int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear);
	void afisare_intre_2_date(int zi1, int luna1, int an1, int zi2, int luna2, int an2);
	void curse_active(int zi_data, int luna_data);
	void afis_fara_discount();
};

