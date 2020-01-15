#pragma once
#include "Ingredient.h"

using namespace std;
#include <iostream>
#include<vector>
#include<string>
static int id_p = 1;

class Pizza
{
	vector<Ingredient*> ingrediente;
	int nr_ing;
	int id_pizza;
	string denumire_pizza;
	bool vegPizza;
public:
	Pizza();
	Pizza(string den ,vector<Ingredient*>a,int nr_ing = 1, bool vegp = true);
	
	Pizza(vector<Ingredient*> ingrediente, int nr_ing, int id_pizza, string denumire_pizza, bool veg_pizza)
		: ingrediente(std::move(ingrediente)),
		  nr_ing(nr_ing),
		  id_pizza(id_pizza),
		  denumire_pizza(std::move(denumire_pizza)),
		  vegPizza(veg_pizza)
	{
		this->id_pizza = id_p++;
	}



	Pizza(const Pizza& other)
		: ingrediente(other.ingrediente),
		  nr_ing(other.nr_ing),
		  id_pizza(other.id_pizza),
		  denumire_pizza(other.denumire_pizza),
		  vegPizza(other.vegPizza)
	{
		
	}

	Pizza(Pizza&& other) noexcept
		: ingrediente(std::move(other.ingrediente)),
		  nr_ing(other.nr_ing),
		  id_pizza(other.id_pizza),
		  denumire_pizza(std::move(other.denumire_pizza)),
		  vegPizza(other.vegPizza)
	{
	}

	Pizza& operator=(const Pizza& other)
	{
		if (this == &other)
			return *this;
		ingrediente = other.ingrediente;
		nr_ing = other.nr_ing;
		id_pizza = other.id_pizza;
		denumire_pizza = other.denumire_pizza;
		vegPizza = other.vegPizza;
		return *this;
	}

	Pizza& operator=(Pizza&& other) noexcept
	{
		if (this == &other)
			return *this;
		ingrediente = std::move(other.ingrediente);
		nr_ing = other.nr_ing;
		id_pizza = other.id_pizza;
		denumire_pizza = std::move(other.denumire_pizza);
		vegPizza = other.vegPizza;
		return *this;
	}

	vector<Ingredient*> get_ingrediente() const;
	void set_ingrediente(vector<Ingredient*> ingrediente);
	int get_nr_ing() const;
	void set_nr_ing(int nr_ing);
	int get_id_pizza() const;
	void set_id_pizza(int id_pizza);
	string get_denumire_pizza() const;
	void set_denumire_pizza(string denumire_pizza);
	bool is_veg_pizza() const;
	void set_veg_pizza(bool veg_pizza);
	friend Pizza operator-(Pizza& i, int nr);
	friend Pizza operator+(Pizza& i, Ingredient* ing);
	virtual void citire();
	virtual void afisare();

};

