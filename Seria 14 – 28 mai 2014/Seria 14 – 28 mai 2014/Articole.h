#pragma once

#include "Referinta.h"
#include<string>
#include <vector>
#include <iostream>
using namespace std;
class Articole:public Referinta
{private:
	int nr_autori;
	vector<string> nume;
	string titlu_articol;
	int an_publicare;
	string nume_revista;
	int nr_aparut_revista;
	int nr_pagini;

public:
	Articole();


	Articole(int nr_autori, vector<string> basic_strings, string titlu_articol, int an_publicare, string nume_revista,
		int nr_aparut_revista, int nr_pagini)
		: nr_autori(nr_autori),
		  nume(basic_strings),
		  titlu_articol(titlu_articol),
		  an_publicare(an_publicare),
		  nume_revista(nume_revista),
		  nr_aparut_revista(nr_aparut_revista),
		  nr_pagini(nr_pagini)
	{
	}

	int get_nr_autori() const;
	void set_nr_autori(int nr_autori);
	vector<string> get_nume() const;
	void set_nume(vector<string> basic_strings);
	string get_titlu_articol() const;
	void set_titlu_articol(string titlu_articol);
	int get_an_publicare() const;
	void set_an_publicare(int an_publicare);
	string get_nume_revista() const;
	void set_nume_revista(string nume_revista);
	int get_nr_aparut_revista() const;
	void set_nr_aparut_revista(int nr_aparut_revista);
	int get_nr_pagini() const;
	void set_nr_pagini(int nr_pagini);
	void citire() override;
	void afisare() override;
};

