#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<typeinfo>
#include "Persoana.h"
using namespace std;
static const int plafon_premium = 50000;
static const int plafon_gold = 40000;
static const int plafon_silver = 30000;
class Membru:public Persoana
{
private:
	int tip_apartenenta;
	float procent_plafon_minim;
	float total_cheltuieli;
	
public:

	float get_total_cheltuieli() const;
	void set_total_cheltuieli(float total_cheltuieli);
	Membru();
	Membru(int tip_apartenenta, int procent_plafon_minim)
		: tip_apartenenta(tip_apartenenta),
		  procent_plafon_minim(procent_plafon_minim)
	{
	}

	int get_tip_apartenenta() const;
	void set_tip_apartenenta(int tip_apartenenta);
	float get_procent_plafon_minim() const;
	void set_procent_plafon_minim(float procent_plafon_minim);
	void citire() override;
	void afisare() override;




};

