#pragma once

#include <iostream>
#include <vector>

using namespace std;

const int NRLOCURI = 500;

template <typename T1, typename T2, typename T3>
class triplet {

private:
    T1 a;
    T2 b;
    T3 c;

public:
	triplet()
	{
        a = NULL;
        b = NULL;
        c = NULL;
	}

    triplet(T1 a, T2 b, T3 c)
	    : a(a),
	      b(b),
	      c(c)
    {
    }

    inline T1 get_f() const {
        return a;
    }
    inline T2 get_s() const {
        return b;
    }
    inline T3 get_t() const {
        return c;
    }

};

typedef triplet<int, int, int> Data;

class Candidat {

private:
    static int nrING;

protected:
    string nume;
    string serieCI;
    int nrCI;
    double medieBAC;
    int categ; // prima sau a doua fac
    int tip; // IF sau ID
    int NrInreg;
    string cod;
    double notaProba;
    double media;
    Data dat;

public:

    string get_nume() const;
    void set_nume(string nume);
    string get_serie_ci() const;
    void set_serie_ci(string serie_ci);
    int get_nr_ci() const;
    void set_nr_ci(int nr_ci);
    double get_medie_bac() const;
    void set_medie_bac(double medie_bac);
    int get_categ() const;
    void set_categ(int categ);
    int get_tip() const;
    void set_tip(int tip);
    int get_nr_inreg() const;
    void set_nr_inreg(int nr_inreg);
    string get_cod() const;
    void set_cod(string cod);
    double get_nota_proba() const;
    void set_nota_proba(double nota_proba);
    double get_media() const;
    void set_media(double media);
    Data get_dat() const;
    void set_dat(Data dat);
    virtual double calcul_medie() = 0;
    Candidat();

    Candidat(string n, string s, int nrC, double Bac, int t, int cat, double notaAd);
    virtual ~Candidat() {}
    virtual void citire();
    virtual void afisare();



    friend bool operator<(const Candidat& a, const Candidat& b);
    friend bool operator==(const Candidat& a, const Candidat& b);
    friend bool operator!=(const Candidat& a, const Candidat& b);
    friend bool operator<(const Candidat& a, const Candidat& b);
    friend std::ostream& operator<<(std::ostream& o, Candidat*& i);
    friend std::istream& operator>>(std::istream& o, Candidat*& i);
	//sau Candidat operator+ candidat operator -
    friend bool operator+(Candidat& i, int nr);
    friend bool operator-(Candidat& i, int nr);


	
};

