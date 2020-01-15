#pragma once
#include "Zbor.h"
#include <vector>
#include <unordered_map>
static int id_cont;
class Container
{
	int id_container;
	std::vector<Zbor*> zboruri;
	int nr_curse;
	float pret_clasa_economic;
	std::unordered_map<std::string, std::string> ruta;
public:
	Container();
	Container(std::vector<Zbor*> zboruri, int nr_curse, float pret_clasa_economic,
		std::unordered_map<std::string, std::string> pairs)
		: zboruri(zboruri),
		  nr_curse(nr_curse),
		  pret_clasa_economic(pret_clasa_economic),
		  ruta(pairs)
	{
	}

	std::vector<Zbor*> get_zboruri() const;
	void set_zboruri(std::vector<Zbor*> zboruri);
	int get_nr_curse() const;
	void set_nr_curse(int nr_curse);
	float get_pret_clasa_economic() const;
	void set_pret_clasa_economic(float pret_clasa_economic);
	std::unordered_map<std::string, std::string> get_ruta() const;
	void set_ruta(std::unordered_map<std::string, std::string> pairs);
	void citire();
	void afisare();
	void adaugare_zbor();
};

