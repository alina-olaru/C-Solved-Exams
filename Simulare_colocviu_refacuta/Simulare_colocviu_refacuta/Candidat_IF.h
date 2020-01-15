#pragma once
#include "Candidat.h"


class Candidat_IF : virtual public Candidat {

public:
	double calcul_medie();
    friend istream& operator>> (istream&, Candidat_IF*&);
    friend ostream& operator<< (ostream&,  Candidat_IF*&);
    Candidat_IF() : Candidat() {}
    Candidat_IF(string n, string s, int nrC, double Bac, double notaAd) : Candidat(n, s, nrC, Bac, 0, 1, notaAd) {}
    virtual ~Candidat_IF() {}
};

