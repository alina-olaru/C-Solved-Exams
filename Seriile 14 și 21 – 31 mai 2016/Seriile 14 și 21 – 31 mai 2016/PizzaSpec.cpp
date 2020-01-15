#include "PizzaSpec.h"

PizzaSpec::PizzaSpec()
{
	this->nr_ingr_suplimentare = 9;
	
}

vector<Ingredient*> PizzaSpec::get_ingrediente_suplimentare() const
{
	return ingrediente_suplimentare;
}

void PizzaSpec::set_ingrediente_suplimentare(vector<Ingredient*> ingrediente_suplimentare)
{
	this->ingrediente_suplimentare = ingrediente_suplimentare;
}

int PizzaSpec::get_nr_ingr_suplimentare() const
{
	return nr_ingr_suplimentare;
}

void PizzaSpec::set_nr_ingr_suplimentare(int nr_ingr_suplimentare)
{
	this->nr_ingr_suplimentare = nr_ingr_suplimentare;
}

void PizzaSpec::citire()
{
	Pizza::citire();
	cout << "\ncate ingrediente speciale are pizza?";
	cin >> this->nr_ingr_suplimentare;
	for (int i = 0; i < nr_ingr_suplimentare; i++)
	{
		Ingredient* ii = new Ingredient();
		ii->citire();
		this->ingrediente_suplimentare.push_back(ii);
	}
}

void PizzaSpec::afisare()
{
	Pizza::afisare();
	cout << this->nr_ingr_suplimentare << " ingr suplimentare";
	for(auto u:this->ingrediente_suplimentare)
	{
		u->afisare();
	}
}
