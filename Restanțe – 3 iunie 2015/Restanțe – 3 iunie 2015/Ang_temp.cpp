#include "Ang_temp.h"


Ang_temp::Ang_temp():Angajat_base()
{
	this->data_term_contract = Data(1, 1, 2020);
	this->tarif_ora = 200;
}
float Ang_temp::get_tarif_ora() const
{
	return tarif_ora;
}

void Ang_temp::set_tarif_ora(float tarif_ora)
{
	this->tarif_ora = tarif_ora;
}

Data Ang_temp::get_data_term_contract() const
{
	return data_term_contract;
}

void Ang_temp::set_data_term_contract(Data data_term_contract)
{
	this->data_term_contract = data_term_contract;
}

vector<float> Ang_temp::get_nr_ore_lucrate() const
{
	return nr_ore_lucrate;
}

void Ang_temp::set_nr_ore_lucrate(vector<float> nr_ore_lucrate)
{
	this->nr_ore_lucrate = nr_ore_lucrate;
}

void Ang_temp::citire()
{

	Angajat_base::citire();
	cout << "\ntariful stabilit pe ora: ";
	cin >> this->tarif_ora;
	cout << "\nData terminarii contractului: ";
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
	this->data_term_contract = *a;



	cout << "\nAnul in care va aflati : " << endl;
	int ann;
	int nr_luni;
	cin >> ann;

	cout << "\nne intereseaza doar anul curent.introduceti de la tastatura indicele lunii in care va aflati(ex. martie=3";
	int index = -1;
	cin >> index;


	if (ann == this->get_hire_date().get_third())
	{
		nr_luni = index - this->get_hire_date().get_second() + 1;
	}

	else
	{
		nr_luni = index;
		
	}

	for(int i=0;i<nr_luni;i++)
	{
		cout << "Introduceti nr orelor suplimentare " << endl;
		float nr_ore;
		cin >> nr_ore;
		this->nr_ore_lucrate.push_back(nr_ore);
	}
}

void Ang_temp::afisare()
{
	cout << endl << "TEMPORAR" << endl;
	Angajat_base::afisare();
	cout << "\ntariful stabilit pe ora: ";
	cout << this->tarif_ora;
	cout << "\nData terminarii contractului: ";
	cout << this->data_term_contract.get_first() << "- " << this->data_term_contract.get_second() << "-" << this->data_term_contract.get_third() << endl;
	
	int i = 1;
	for(auto y:this->nr_ore_lucrate)
	{
		cout << "\nluna " << i << " " << y << " ore lucrate\n";
		i++;
	}
}

