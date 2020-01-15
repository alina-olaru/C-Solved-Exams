#pragma once
#include "Angajat_base.h"

class Singleton_organizatie
{
private:
	static Singleton_organizatie* instance;
	int nr_ang;
	vector<Angajat_base*> ang;
public:
	Singleton_organizatie();
	static Singleton_organizatie* get_instance()
	{
		if(instance==NULL)
		{
			instance = new Singleton_organizatie();
		}
		return instance;
	}
	Singleton_organizatie(int nr_ang, vector<Angajat_base*> angajat_bases)
		: nr_ang(nr_ang),
		  ang(angajat_bases)
	{
	}

	int get_nr_ang() const;
	void set_nr_ang(int nr_ang);
	vector<Angajat_base*> get_ang() const;
	void set_ang(vector<Angajat_base*> angajat_bases);
	void citire();
	void afisare();
	void Add_angajat();
	void afis_temp();
	void afis_perm();
	void incetare_contrat(int luna_data);
	void fara_ore();
	void bonus_luna(int luna);
	void afisare_bonusuri();
};

