#pragma once
#include "Pizza.h"

class PizzaSpec:public Pizza
{
private:
	vector<Ingredient*> ingrediente_suplimentare;
	int nr_ingr_suplimentare;
public:
	PizzaSpec();

	vector<Ingredient*> get_ingrediente_suplimentare() const;

	void set_ingrediente_suplimentare(vector<Ingredient*> ingrediente_suplimentare);

	int get_nr_ingr_suplimentare() const;

	void set_nr_ingr_suplimentare(int nr_ingr_suplimentare);

	PizzaSpec(vector<Ingredient*> ingrediente_suplimentare, int nr_ingr_suplimentare)
		: ingrediente_suplimentare(std::move(ingrediente_suplimentare)),
		  nr_ingr_suplimentare(nr_ingr_suplimentare)
	{
	}
	void citire() override;
	void afisare() override;
	
};

