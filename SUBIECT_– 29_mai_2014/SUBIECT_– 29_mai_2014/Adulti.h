#pragma once
#include<vector>
#include "Pacient.h"
using namespace std;
#include <string>
#include <vector>
class Adulti:public Pacient
{
	int fumator;
	int nivel_sedentarism;
public:
	Adulti();

	int get_fumator() const;

	void set_fumator(int fumator);

	int get_nivel_sedentarism() const;

	void set_nivel_sedentarism(int nivel_sedentarism);

	Adulti(int fumator, int nivel_sedentarism)
		: fumator(fumator),
		  nivel_sedentarism(nivel_sedentarism)
	{
	}

	Adulti(string nume, string prenume, int varsta, string adresa, int fumator, int nivel_sedentarism)
		: Pacient(nume, prenume, varsta, adresa),
		  fumator(fumator),
		  nivel_sedentarism(nivel_sedentarism)
	{
	}
	void citire() override;
	void afisare() override;
};

