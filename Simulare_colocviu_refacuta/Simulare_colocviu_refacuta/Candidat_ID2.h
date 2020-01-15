#pragma once
#include <string>
#include "Candidat_ID.h"

class Candidat_ID2 : virtual public Candidat_2fac, virtual public Candidat_ID {

public:
	double calcul_medie();
    Candidat_ID2() : Candidat_2fac(), Candidat_ID(), Candidat() {}
    Candidat_ID2(std::string n, std::string s, int nrC, double Bac, double notaAd, double Mate, double ant) : Candidat_2fac(n, s, nrC, Bac, notaAd, ant), Candidat_ID(n, s, nrC, Bac, notaAd, Mate) {}
    virtual ~Candidat_ID2() {}
	void citire() override;
	void afisare() override;

	friend istream& operator>> (istream&, Candidat_ID2*&);
	friend ostream& operator<< (ostream&, Candidat_ID2*&);
	
};
