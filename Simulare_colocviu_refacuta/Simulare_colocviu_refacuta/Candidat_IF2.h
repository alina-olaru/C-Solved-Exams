#pragma once
#include "Candidat_IF.h"
#include "Candidat_2fac.h"

class Candidat_IF2 : virtual public Candidat_2fac, virtual public Candidat_IF {

public:
	double calcul_medie();
    Candidat_IF2() : Candidat_2fac(), Candidat_IF() {}
    Candidat_IF2(string n, string s, int nrC, double Bac, double notaAd, double Mate, double ant) : Candidat_2fac(n, s, nrC, Bac, notaAd, ant), Candidat_IF(n, s, nrC, Bac, notaAd) {}
    virtual ~Candidat_IF2() {}

    friend istream& operator>> (istream& in, Candidat_IF2*& a);
    friend ostream& operator<< (ostream& out, Candidat_IF2*& a);

};
