#pragma once
#include <string>

class Bautura
{
private:
	float pret_bautura;
	std::string denumire_bautura;
public:
	Bautura();
	Bautura(float pret_bautura, std::string denumire_bautura)
		: pret_bautura(pret_bautura),
		  denumire_bautura(std::move(denumire_bautura))
	{
	}

	float get_pret_bautura() const;
	void set_pret_bautura(float pret_bautura);
	std::string get_denumire_bautura() const;
	void set_denumire_bautura(std::string denumire_bautura);
	void citire_b();
	void afis_b();


};

