#pragma once
#include<typeinfo>
#include<vector>
#include<string>
#include<iostream>
#include "Angajat.h"
using namespace std;
class Firma
{
private:
	static Firma* instance;
	
	int nr_ang;
	vector<Angajat*> angajati;
public:
	static Firma* get_instance()
	{
		if(instance==NULL)
		{
			instance = new Firma();
			
		}
		return instance;
	}
	Firma(int nr_ang, vector<Angajat*> angajati)
		: nr_ang(nr_ang),
		  angajati(angajati)
	{
	}

	Firma() = default;


	int get_nr_ang() const;
	void set_nr_ang(int nr_ang);
	vector<Angajat*> get_angajati() const;
	void set_angajati(vector<Angajat*> angajati);
	void citire();
	void afisare();
	void afis_l();
	void afis_rez();
	void afis_2015();
	void afisare_prima();
	void afisare_dupa_hire_date();
	bool cmp();
};

