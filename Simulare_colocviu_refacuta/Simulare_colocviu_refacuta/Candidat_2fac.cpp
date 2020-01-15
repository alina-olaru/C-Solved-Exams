#include "Candidat_2fac.h"

double Candidat_2fac::calcul_medie()
{
	media = 0.6 * notaProba + 0.4 * notaAnterioara;
	return media;
}

void Candidat_2fac::citire()
{
	Candidat::citire();
	cout << "\nnota luata anul anterior: ";
	cin >> this->notaAnterioara;
}

void Candidat_2fac::afisare()
{
	Candidat::afisare();
	cout << "\nnota luata anul anterior: ";
	cout<< this->notaAnterioara;
}

istream& operator>>(istream& in, Candidat_2fac*& a)
{
	a->citire();
	return in;
}

ostream& operator<<(ostream& out, Candidat_2fac*& a)
{
	a->afisare();
	return out;
}

