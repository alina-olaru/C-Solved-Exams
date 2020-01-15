#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<typeinfo>
using namespace std;


class Persoana
{
private:
	string nume;
	string prenume;
	string cnp;
	int nr_vizite;
	int nr_servicii;
	string adresa_mail;
	int sex;
public:

	Persoana();
	Persoana(string nume, string prenume, string cnp, int nr_vizite, int nr_servicii, string adresa_mail, int sex)
		: nume(nume),
		  prenume(prenume),
		  cnp(cnp),
		  nr_vizite(nr_vizite),
		  nr_servicii(nr_servicii),
		  adresa_mail(adresa_mail),
		  sex(sex)
	{
	}

	string get_nume() const;
	void set_nume(string nume);
	string get_prenume() const;
	void set_prenume(string prenume);
	string get_cnp() const;
	void set_cnp(string cnp);
	int get_nr_vizite() const;
	void set_nr_vizite(int nr_vizite);
	int get_nr_servicii() const;
	void set_nr_servicii(int nr_servicii);
	string get_adresa_mail() const;
	void set_adresa_mail(string adresa_mail);
	int get_sex() const;
	void set_sex(int sex);

	virtual void citire();
	virtual void afisare();
};

