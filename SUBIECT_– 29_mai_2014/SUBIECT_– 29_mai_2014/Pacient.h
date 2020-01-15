#pragma once
#include<vector>
using namespace std;
#include <string>
#include <vector>
class Pacient
{
private:
	string nume;
	string prenume;
	int varsta;
	string adresa;
	
protected:
	
public:
	virtual void citire();
	virtual void afisare();

	Pacient();
	Pacient(string nume, string prenume, int varsta, string adresa)
		: nume(nume),
		  prenume(prenume),
		  varsta(varsta),
		  adresa(adresa)
	{
	}

	string get_nume() const;
	void set_nume(string nume);
	string get_prenume() const;
	void set_prenume(string prenume);
	int get_varsta() const;
	void set_varsta(int varsta);
	string get_adresa() const;
	void set_adresa(string adresa);
};

