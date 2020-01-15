#include "Candidat_IF2.h"

double Candidat_IF2::calcul_medie()
{
	return Candidat_2fac::calcul_medie();
}

ostream& operator<<(ostream& out, Candidat_IF2*& a)
{
	a->afisare();
	return out;
}

istream& operator>>(istream& in, Candidat_IF2*& a)
{
	a->citire();
	return in;
}

