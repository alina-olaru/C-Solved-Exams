#pragma once
#include<typeinfo>
#include<vector>
#include<string>
#include<iostream>
#include "Angajat.h"
using namespace std;

class LUCRATIV:public Angajat 
{
private:
	int nr_copii_minori;
public:

	LUCRATIV() = default;

	LUCRATIV(int nr_copii_minori)
		: nr_copii_minori(nr_copii_minori)
	{
	}


	int get_nr_copii_minori() const;
	void set_nr_copii_minori(int nr_copii_minori);
	void citire() override;
	void afisare() override;


};

