#pragma once
#include<vector>
#include "Pacient.h"
#include <map>
using namespace std;
#include <string>
#include <vector>


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

    friend bool operator<(const triplet& lhs, const triplet& rhs)
    {
	    if (lhs.a < rhs.a)
		    return true;
	    if (rhs.a < lhs.a)
		    return false;
	    if (lhs.b < rhs.b)
		    return true;
	    if (rhs.b < lhs.b)
		    return false;
	    return lhs.c < rhs.c;
    }

    friend bool operator<=(const triplet& lhs, const triplet& rhs)
    {
	    return !(rhs < lhs);
    }

    friend bool operator>(const triplet& lhs, const triplet& rhs)
    {
	    return rhs < lhs;
    }

    friend bool operator>=(const triplet& lhs, const triplet& rhs)
    {
	    return !(lhs < rhs);
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


class Copii:public Pacient
{
private:
	string	nume_parinti;
	string prenume_mama;
	string prenume_tata;
	int nr_precedenti_cardiovascular;
    map<Data, int> proteina_reactiva;
	
public:
	Copii();
	Copii(string nume_parinti, string prenume_mama, string prenume_tata, int nr_precedenti_cardiovascular,
		map<Data, int> proteina_reactiva)
		: nume_parinti(nume_parinti),
		  prenume_mama(prenume_mama),
		  prenume_tata(prenume_tata),
		  nr_precedenti_cardiovascular(nr_precedenti_cardiovascular),
		  proteina_reactiva(proteina_reactiva)
	{
	}

	Copii(string nume, string prenume, int varsta, string adresa, string nume_parinti, string prenume_mama,
		string prenume_tata, int nr_precedenti_cardiovascular, map<Data, int> proteina_reactiva)
		: Pacient(nume, prenume, varsta, adresa),
		  nume_parinti(nume_parinti),
		  prenume_mama(prenume_mama),
		  prenume_tata(prenume_tata),
		  nr_precedenti_cardiovascular(nr_precedenti_cardiovascular),
		  proteina_reactiva(proteina_reactiva)
	{
	}

	string get_nume_parinti() const;
	void set_nume_parinti(string nume_parinti);
	string get_prenume_mama() const;
	void set_prenume_mama(string prenume_mama);
	string get_prenume_tata() const;
	void set_prenume_tata(string prenume_tata);
	int get_nr_precedenti_cardiovascular() const;
	void set_nr_precedenti_cardiovascular(int nr_precedenti_cardiovascular);
	map<Data, int> get_proteina_reactiva() const;
	void set_proteina_reactiva(map<Data, int> proteina_reactiva);
	void citire() override;
	void afisare() override;
	int get_cr()
	{
		return this->proteina_reactiva.begin()->second;
	}
};

