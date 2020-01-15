#pragma once
#include <string>
static int id = 1;
class Proprietate
{
private:
	std::string adresa;
	float suprafata_mp;
	float chirie_mp;
	int in_locatie;
public:
	Proprietate();
	std::string get_adresa() const;
	void set_adresa(std::string adresa);
	float get_suprafata_mp() const;
	void set_suprafata_mp(float suprafata_mp);
	float get_chirie_mp() const;
	void set_chirie_mp(float chirie_mp);
	virtual void citire();
	virtual void afisare();

	int get_in_locatie() const;
	void set_in_locatie(int in_locatie);
};

