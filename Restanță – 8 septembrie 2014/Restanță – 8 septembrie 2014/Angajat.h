#pragma once
#include<typeinfo>
#include<vector>
#include<string>
#include<iostream>
using namespace std;


template <typename T1, typename T2, typename T3>
class triplet {

private:
    T1 a;
    T2 b;
    T3 c;

public:


    triplet() = default;

    inline triplet(T1 a, T2 b, T3 c)
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


class Angajat
{
private:
	string nume;
	string prenume;
	int tip_contract;
	int tip_lucrativ;
    Data hire_date;
public:


	string get_nume() const;

	void set_nume(string nume);

	string get_prenume() const;

	void set_prenume(string prenume);

	int get_tip_contract() const;

	void set_tip_contract(int tip_contract);

	int get_tip_lucrativ() const;

	void set_tip_lucrativ(int tip_lucrativ);

	Data get_hire_date() const;

	void set_hire_date(Data hire_date);

	Angajat(string nume, string prenume, int tip_contract, int tip_lucrativ, Data hire_date)
		: nume(nume),
		  prenume(prenume),
		  tip_contract(tip_contract),
		  tip_lucrativ(tip_lucrativ),
		  hire_date(hire_date)
	{
	}

	Angajat() = default;

	virtual void citire();
	virtual void afisare();
};

