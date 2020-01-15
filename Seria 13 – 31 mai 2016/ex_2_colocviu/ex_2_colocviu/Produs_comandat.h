#pragma once
#include "Produs.h"
#include <iostream>

class Produs_comandat:public Produs
{
public:
	int nr_portii_comandate_per_produs;
public:

	int get_nr_portii_comandate_per_produs() const;
	void set_nr_portii_comandate_per_produs(int nr_portii_comandate_per_produs);

	Produs_comandat(int nr_portii_comandate_per_produs)
		: nr_portii_comandate_per_produs(nr_portii_comandate_per_produs)
	{
	}
	Produs_comandat(int a,float b,string c):Produs(c,b)
	{
		this->nr_portii_comandate_per_produs = a;
	}
	Produs_comandat():Produs()
	{
		nr_portii_comandate_per_produs = 0;
	}
	void afis()
	{
		Produs::afis();
		cout << "Nr portii: " << nr_portii_comandate_per_produs;
	}
};

