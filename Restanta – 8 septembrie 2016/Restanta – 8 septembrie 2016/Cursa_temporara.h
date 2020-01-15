#pragma once
#include "Zbor.h"

class Cursa_temporara:public Zbor 
{
private:
	int perioada_activa;
public:
	Cursa_temporara();

	Cursa_temporara(int perioada_activa)
		: perioada_activa(perioada_activa)
	{
	}

	Cursa_temporara(int id_zbor, Data data_inregistrare, int perioada_activa)
		: Zbor(id_zbor, data_inregistrare),
		  perioada_activa(perioada_activa)
	{
	}

	int get_perioada_activa() const;
	void set_perioada_activa(int perioada_activa);
	void citire();
	void afisare();


};

