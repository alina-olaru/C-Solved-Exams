#include "Produs.h"
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

Produs::Produs() {
	this->pret_portie = 10;
	this->denumire_produs = " ";
}
Produs::Produs(string a, float b) {
	this->denumire_produs = a;
	this->pret_portie = b;
	cout << endl << this->denumire_produs << " costa " << this->pret_portie;


}

Produs::Produs(float a )
{
	this->pret_portie = a;
	this->denumire_produs = "Necunoscut";
}

Produs::Produs(string a)
{
	this->denumire_produs = a;
	this->pret_portie = 10;
}
void Produs::afis()
{
	cout << "\nDenumire " << this->denumire_produs;
	cout << "\nPret per portie " << this->pret_portie;
}
