#include "Comanda_onlinw.h"

Comanda_onlinw::Comanda_onlinw():Comanda()
{
	this->adrLivr = "";
	this->comLivr = 5;
}

string Comanda_onlinw::get_adr_livr() const
{
	return adrLivr;
}

void Comanda_onlinw::set_adr_livr(string adr_livr)
{
	adrLivr = adr_livr;
}

float Comanda_onlinw::get_com_livr() const
{
	return comLivr;
}

void Comanda_onlinw::set_com_livr(float com_livr)
{
	comLivr = com_livr;
}

void Comanda_onlinw::afis()
{
	Comanda::afis();
	cout << "\nadresa de livrare: ";
	cout << this->adrLivr;
	cout << "\ncomision de livrare: ";
	cin >> this->comLivr;
}

void Comanda_onlinw::citire_produs_comandat()
{

	Comanda::citire_produs_comandat();
	
	cout << "\nadresa de livrare: ";
	cin >> this->adrLivr;
	cout << "\ncomision de livrare: ";
	cin >> this->comLivr;
}
