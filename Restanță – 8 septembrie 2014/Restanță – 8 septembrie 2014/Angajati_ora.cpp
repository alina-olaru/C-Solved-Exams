#include "Angajati_ora.h"

Data Angajati_ora::get_data_terminare_proiect() const
{
	return data_terminare_proiect;
}

void Angajati_ora::set_data_terminare_proiect(Data data_terminare_proiect)
{
	this->data_terminare_proiect = data_terminare_proiect;
}

void Angajati_ora::citire()
{
	Angajat::citire();
	cout << "Data de terminare a contractului : ";
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
	this->data_terminare_proiect = *a;
}

void Angajati_ora::afisare()
{
	Angajat::afisare();
	cout << "Data de terminare a contractului : ";
	cout << this->data_terminare_proiect.get_f();
	cout << this->data_terminare_proiect.get_s();
	cout << this->data_terminare_proiect.get_t();

}
