#include "PaginiWEB.h"

PaginiWEB::PaginiWEB():Referinta()
{
	
	this->nume_proprietar = "";
	this->titlu_pagina = "";
	this->url_pagina = "";
	
	Data* a = new Data(1,2,2000);
	this->data_accesare = *a;
}

string PaginiWEB::get_nume_proprietar() const
{
	return nume_proprietar;
}

void PaginiWEB::set_nume_proprietar(string nume_proprietar)
{
	this->nume_proprietar = nume_proprietar;
}

string PaginiWEB::get_titlu_pagina() const
{
	return titlu_pagina;
}

void PaginiWEB::set_titlu_pagina(string titlu_pagina)
{
	this->titlu_pagina = titlu_pagina;
}

string PaginiWEB::get_url_pagina() const
{
	return url_pagina;
}

void PaginiWEB::set_url_pagina(string url_pagina)
{
	this->url_pagina = url_pagina;
}

Data PaginiWEB::get_data_accesare() const
{
	return data_accesare;
}

void PaginiWEB::set_data_accesare(Data data_accesare)
{
	this->data_accesare = data_accesare;
}

void PaginiWEB::citire()
{
	Referinta::citire();
	cout << "\nNume proprietar: ";
	cin >> this->nume_proprietar;
	cout << "\nTitlu pagina: ";
	cin >> this->titlu_pagina;
	cout << "\nURL: ";
	cin >> this->url_pagina;
	int zi;
	int luna;
	int an;
	cout << "\nZi ";
	cin >> zi;
	cout << "\nLuna ";
	cin >> luna;
	cout << "\nAn: ";
	cin >> an;
	Data* a = new Data(zi, luna, an);
	this->data_accesare = *a;
	
}

void PaginiWEB::afisare()
{
	Referinta::afisare();
	cout << "\nNume proprietar: ";
	cout << this->nume_proprietar;
	cout << "\nTitlu pagina: ";
	cout << this->titlu_pagina;
	cout << "\nURL: ";
	cout << this->url_pagina;
	cout << "\nData: ";
	cout << this->data_accesare.get_f();
	cout << this->data_accesare.get_t();
	cout << this->data_accesare.get_s();
	
}
