#include "Pizza.h"

Pizza::Pizza()
{
	this->id_pizza = id_p++;
}
Pizza::Pizza(string den, vector<Ingredient*> a, int nr_ing, bool vegp)
{
	
}


vector<Ingredient*> Pizza::get_ingrediente() const
{
	return ingrediente;
}

void Pizza::set_ingrediente(vector<Ingredient*> ingrediente)
{
	this->ingrediente = ingrediente;
}

int Pizza::get_nr_ing() const
{
	return nr_ing;
}

void Pizza::set_nr_ing(int nr_ing)
{
	this->nr_ing = nr_ing;
}

int Pizza::get_id_pizza() const
{
	return id_pizza;
}

void Pizza::set_id_pizza(int id_pizza)
{
	this->id_pizza = id_pizza;
}

string Pizza::get_denumire_pizza() const
{
	return denumire_pizza;
}

void Pizza::set_denumire_pizza(string denumire_pizza)
{
	this->denumire_pizza = denumire_pizza;
}

bool Pizza::is_veg_pizza() const
{
	return vegPizza;
}

void Pizza::set_veg_pizza(bool veg_pizza)
{
	vegPizza = veg_pizza;
}

void Pizza::citire()
{
	cout << "\ncate ingrediente are pizza?";
	cin >> this->nr_ing;
	for(int i=0;i<nr_ing;i++)
	{
		Ingredient* ii = new Ingredient();
		ii->citire();
		this->ingrediente.push_back(ii);
	}
	cout << "\ndenumire pizza ";
	cin >> this->denumire_pizza;
	cout << "\nveg(da-1,nu-0)";
	int ch; cin >> ch;
	(ch == 0) ? this->vegPizza = false : this->vegPizza = true;
}

void Pizza::afisare()
{
	cout << "\nnr ingred: "<< this->nr_ing;
	for(auto y:this->ingrediente)
	{
		y->afisare();
	}
	(this->vegPizza == false) ? cout << "\nveg" : cout << "\nnu e beg";
	cout << "\nden: " << this->denumire_pizza;
}


Pizza operator-(Pizza& i, int nr)
{
	i.ingrediente.erase(i.ingrediente.begin()+ nr -1);
	return i;
}

Pizza operator+(Pizza& i, Ingredient* ing)
{
	i.ingrediente.push_back(ing);
	return i;
}
