#pragma once
#include "Comanda.h"

class ComSpec:public Comanda 
{
private:
	string Obsc;
	float suplim;
public:
	ComSpec();
	string get_obsc() const;

	void set_obsc(string obsc);

	float get_suplim() const;

	void set_suplim(float suplim);

	ComSpec(string obsc, float suplim)
		: Obsc(obsc),
		  suplim(suplim)
	{
	}

	ComSpec(string cs, int i, string obsc, float suplim)
		: Comanda(cs, i),
		  Obsc(obsc),
		  suplim(suplim)
	{
	}

	ComSpec(string cs, int i, int i1, int i2, int i3, string obsc, float suplim)
		: Comanda(cs, i, i1, i2, i3),
		  Obsc(obsc),
		  suplim(suplim)
	{
	}
	void afis() override;
	void citire_produs_comandat() override;
};

