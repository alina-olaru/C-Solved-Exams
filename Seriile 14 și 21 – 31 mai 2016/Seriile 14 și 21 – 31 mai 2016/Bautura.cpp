#include "Bautura.h"
#include <iostream>

Bautura::Bautura()
{
	this->pret_bautura = 1;
	this->denumire_bautura = "";
}

float Bautura::get_pret_bautura() const
{
	return pret_bautura;
}

void Bautura::set_pret_bautura(float pret_bautura)
{
	this->pret_bautura = pret_bautura;
}

std::string Bautura::get_denumire_bautura() const
{
	return denumire_bautura;
}

void Bautura::set_denumire_bautura(std::string denumire_bautura)
{
	this->denumire_bautura = denumire_bautura;
}

void Bautura::citire_b()
{
	std::cout << "BAUTURA: " << std::endl;
	std::cout << "\nden:";
	std::cin >> this->denumire_bautura;
	std::cout << "\npret: ";
	std::cin >> this->pret_bautura;
}

void Bautura::afis_b()
{
	std::cout << "BAUTURA: " << std::endl;

	std::cout << "\nden:";
	std::cout << this->denumire_bautura;
	std::cout << "\npret: ";
	std::cout << this->pret_bautura;
}
