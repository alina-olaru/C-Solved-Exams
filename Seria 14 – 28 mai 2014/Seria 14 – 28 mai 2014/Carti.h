#pragma once
#include "Referinta.h"
#include<string>
#include <vector>
#include <iostream>
using namespace std;

class Carti:public Referinta
{
private:
	int nr_autori;
	vector<string> autori;
	string titlu_carte;
	int an_publicare;
	string nume_editura;
	string oras_publicare;


public:
	Carti();
	Carti(int nr_autori, vector<string> basic_strings, string titlu_carte, int an_publicare, string nume_editura,
		string oras_publicare)
		: nr_autori(nr_autori),
		  autori(basic_strings),
		  titlu_carte(titlu_carte),
		  an_publicare(an_publicare),
		  nume_editura(nume_editura),
		  oras_publicare(oras_publicare)
	{
	}

	int get_nr_autori() const;
	void set_nr_autori(int nr_autori);
	vector<string> get_autori() const;
	void set_autori(vector<string> basic_strings);
	string get_titlu_carte() const;
	void set_titlu_carte(string titlu_carte);
	int get_an_publicare() const;
	void set_an_publicare(int an_publicare);
	string get_nume_editura() const;
	void set_nume_editura(string nume_editura);
	string get_oras_publicare() const;
	void set_oras_publicare(string oras_publicare);
	void citire() override;
	void afisare() override;
	
};

