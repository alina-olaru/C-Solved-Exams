#pragma once
#include "Comanda.h"

class Comanda_onlinw:public Comanda 
{
public:
	string adrLivr;
	float comLivr;
public:
	Comanda_onlinw();
	string get_adr_livr() const;

	void set_adr_livr(string adr_livr);

	float get_com_livr() const;

	void set_com_livr(float com_livr);

	Comanda_onlinw(string adr_livr, float com_livr)
		: adrLivr(adr_livr),
		  comLivr(com_livr)
	{
	}

	Comanda_onlinw(string cs, int i, string adr_livr, float com_livr)
		: Comanda(cs, i),
		  adrLivr(adr_livr),
		  comLivr(com_livr)
	{
	}

	Comanda_onlinw(string cs, int i, int i1, int i2, int i3, string adr_livr, float com_livr)
		: Comanda(cs, i, i1, i2, i3),
		  adrLivr(adr_livr),
		  comLivr(com_livr)
	{
	}

	void afis() override;
	void citire_produs_comandat() override;
};

