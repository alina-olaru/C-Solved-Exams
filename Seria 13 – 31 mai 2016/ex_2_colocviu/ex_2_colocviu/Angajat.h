#pragma once
#include <string>
#include "Comanda.h"

class Angajat
{
private:
	std::string nume;
	int ani_vechime;
	float salariu;
	float bonus;
	int nr_comenzi;
	float suma_incasata_comenzi;
	vector<Comanda*>comenzi;
	int sex;
public:
	Angajat();
	int get_sex() const;
	void set_sex(int sex);
	vector<Comanda*> get_comenzi() const;

	void set_comenzi(vector<Comanda*> comandas);

	Angajat(std::string nume, int ani_vechime, float salariu, float bonus, int nr_comenzi, float suma_incasata_comenzi,
	        vector<Comanda*> comandas)
		: nume(nume),
		  ani_vechime(ani_vechime),
		  salariu(salariu),
		  bonus(bonus),
		  nr_comenzi(nr_comenzi),
		  suma_incasata_comenzi(suma_incasata_comenzi),
		  comenzi(comandas)
	{
	}

	Angajat(std::string nume, int ani_vechime, float salariu, float bonus, int nr_comenzi, float suma_incasata_comenzi)
		: nume(nume),
		  ani_vechime(ani_vechime),
		  salariu(salariu),
		  bonus(bonus),
		  nr_comenzi(nr_comenzi),
		  suma_incasata_comenzi(suma_incasata_comenzi)
	{
	}
	
	int get_nr_comenzi() const;
	void set_nr_comenzi(int nr_comenzi);
	float get_suma_incasata_comenzi() const;
	void set_suma_incasata_comenzi(float suma_incasata_comenzi);
	std::string get_nume() const;
	void set_nume(std::string nume);
	int get_ani_vechime() const;
	void set_ani_vechime(int ani_vechime);
	float get_salariu() const;
	void set_salariu(float salariu);
	float get_bonus() const;
	void set_bonus(float bonus);
	void citire();
	void afis();
	void citire_cerinta();
	void afisare_data();
	void cautare_papanasi();
	void afis_procent();

	
	friend bool operator<(const Angajat& lhs, const Angajat& rhs);
	friend bool operator>(const Angajat& lhs, const Angajat& rhs);
	friend std::ostream& operator <<(std::ostream& out, Angajat& ang);
	friend bool operator==(const Angajat& a, const Angajat& b);
	friend bool operator!=(const Angajat& a, const Angajat& b);
};

