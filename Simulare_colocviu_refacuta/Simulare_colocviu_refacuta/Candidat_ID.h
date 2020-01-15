#pragma once
#include <string>
#include "Candidat_2fac.h"

class Candidat_ID : virtual public Candidat {

private:
    double notaMate;

public:
    double calcul_medie();
    Candidat_ID() : notaMate(0), Candidat() {}
    Candidat_ID(string n, string s, int nrC, double Bac, double notaAd, double Mate) : notaMate(Mate), Candidat(n, s, nrC, Bac, 1, 1, notaAd) {}
    virtual ~Candidat_ID() {};
	void citire() override;
	void afisare() override;

    friend istream& operator>> (istream& in, Candidat_ID*& a);
    friend ostream& operator<< (ostream& out, Candidat_ID*& a);
};
