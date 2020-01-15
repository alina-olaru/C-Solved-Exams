#pragma once

#include <vector>
using namespace std;
#include<iostream>
#include<typeinfo>
#include <string>




template <typename T1, typename T2, typename T3>
class triplet {

private:
    T1 a;
    T2 b;
    T3 c;

public:


    triplet(T1 a, T2 b, T3 c)
	    : a(a),
	      b(b),
	      c(c)
    {
    }

    triplet() = default;

    inline T1 get_first() const {
        return a;
    }
    inline T2 get_second() const {
        return b;
    }
    inline T3 get_third() const {
        return c;
    }

};

typedef triplet<int, int, int> Data;


class Angajat_base
{

private:
	string nume;
	string prenume;
	string cnp;
    Data hire_date;
    string functie;
public:
		

	Angajat_base();
	string get_nume() const;

	void set_nume(string nume);

	string get_prenume() const;

	void set_prenume(string prenume);

	string get_cnp() const;

	void set_cnp(string cnp);

	Data get_hire_date() const;

	void set_hire_date(Data hire_date);

	string get_functie() const;

	void set_functie(string functie);

	Angajat_base(string nume, string prenume, string cnp, Data hire_date, string functie)
		: nume(nume),
		  prenume(prenume),
		  cnp(cnp),
		  hire_date(hire_date),
		  functie(functie)
	{
	}


	virtual void citire();
	virtual void afisare();
};

