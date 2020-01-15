#include "Candidat_ID2.h"

double Candidat_ID2::calcul_medie()
{
	return Candidat_2fac::calcul_medie();
}

void Candidat_ID2::afisare()
{
	Candidat_2fac::afisare();
	Candidat_ID::afisare();
	
}

void Candidat_ID2::citire()
{
	Candidat_2fac::citire();
	Candidat_ID::citire();
}

istream& operator>>(istream& in, Candidat_ID2*&a)
{
	a->citire();
	return in;
}
ostream& operator<<(ostream& out, Candidat_ID2*&a)
{
	a->afisare();
	return out;
}

