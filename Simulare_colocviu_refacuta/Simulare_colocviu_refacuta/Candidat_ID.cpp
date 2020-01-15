#include "Candidat_ID.h"
#include "Candidat_ID2.h"

double Candidat_ID::calcul_medie()
{
	media = 0.6 * notaProba + 0.4 * notaMate;
	return media;
}

void Candidat_ID::citire()
{
	if (typeid(*this) != (typeid(Candidat_ID2))) {
		Candidat::citire();
	}
	cout << "\nnota din bac la mate: ";
	cin >> this->notaMate;
}
void Candidat_ID::afisare()
{
	if (typeid(*this) != (typeid(Candidat_ID2))) {
		Candidat::afisare();
	}
	cout << "\nnota din bac la mate: ";
	cout<< this->notaMate;
}

istream& operator>>(istream& in, Candidat_ID*& a)
{
	a->citire();
	return in;
}

ostream& operator<<(ostream& out, Candidat_ID*& a)
{
	a->afisare();
	return out;
}
