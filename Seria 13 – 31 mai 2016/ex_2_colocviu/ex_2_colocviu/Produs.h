#pragma once
#include <string>
using namespace std;
class Produs
{
	string denumire_produs;
	float pret_portie;
public:
	Produs();
	Produs(float);
	Produs(string);
	Produs(string, float);
	string get_denumire() {
		return this->denumire_produs;
		
	}
	void set_denumire(string a) {
		this->denumire_produs = a;
	}
	float get_pret_portie() {
		return this->pret_portie;
	}
	void set_pret_portie(float b)
	{
		this->pret_portie = b;
	};
	void afis();
	friend class Comanda;
	
};

