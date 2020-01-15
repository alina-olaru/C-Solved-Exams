#pragma once
#include "Candidat.h"

class Candidat_2fac : virtual public Candidat {

private:
    double notaAnterioara;

public:
    double calcul_medie();
    Candidat_2fac() : notaAnterioara(0), Candidat() {}
    Candidat_2fac(string n, string s, int nrC, double Bac, double notaAd, double ant) : notaAnterioara(ant), Candidat(n, s, nrC, Bac, 0, 2, notaAd) {}
    virtual ~Candidat_2fac() {}
	void citire() override;
	void afisare() override;
    friend istream& operator>> (istream& in, Candidat_2fac*& a);
    friend ostream& operator<< (ostream& out, Candidat_2fac*& a);
};
