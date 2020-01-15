#include "ComSpec.h"

ComSpec::ComSpec()
{
	this->suplim = 5;
	this->Obsc = " ";
}

string ComSpec::get_obsc() const
{
	return Obsc;
}

void ComSpec::set_obsc(string obsc)
{
	Obsc = obsc;
}

float ComSpec::get_suplim() const
{
	return suplim;
}

void ComSpec::set_suplim(float suplim)
{
	this->suplim = suplim;
}

void ComSpec::afis()
{
	Comanda::afis();
	cout << "\ncerinta clientului: ";
	cout << this->Obsc;
	cout << "\npret suplimentar: ";
	cout << this->suplim;
}

void ComSpec::citire_produs_comandat()
{
	Comanda::citire_produs_comandat();
	cout << "\ncerinta clientului: ";
	cin>>this->Obsc;
	cout << "\npret suplimentar: ";
	cin >> this->suplim;
}
