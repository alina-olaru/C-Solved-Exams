#include "Ingredient.h"
Ingredient::Ingredient(string denumire , double pret , float cant , string un )
{
	this->denumire = denumire;
	this->pret_unitate = pret;
	this->cantitate_folosita = cant;
	this->unitate = un;
}

Ingredient& Ingredient::operator++()
{
	this->cantitate_folosita++;
	return *this;
}
Ingredient& Ingredient::operator--()
{
	this->cantitate_folosita--;
	return *this;
}

Ingredient Ingredient::operator++(int)
{
	Ingredient i = *this;
	++(this->cantitate_folosita);
	return i;
}

Ingredient Ingredient::operator--(int)
{
	Ingredient i = *this;
	--(this->cantitate_folosita);
	return i;
}

void Ingredient::del()
{
	cout << "Ingredientul nu mai e disponibil";
	this->cantitate_folosita = -1;
}


std::ostream& operator<<(std::ostream& o, Ingredient& i)
{
	if(i.cantitate_folosita==-1)
	{
		o << "Ingredientul nu mai e disponibil";
		
	}
	else 
	{
		o << i.cantitate_folosita;
		o << i.denumire;
		o << i.unitate;
		o << i.pret_unitate;
	}
	return o;
}

std::istream& operator>>(std::istream& o, Ingredient& i)
{
	o >> i.cantitate_folosita;
	o >> i.denumire;
	o >> i.unitate;
	o >> i.pret_unitate;
	return o;
}

Ingredient operator+(Ingredient& i, int nr)
{
	i.cantitate_folosita = i.cantitate_folosita + nr;
	return i;
}

Ingredient operator-(Ingredient& i, int nr)
{
	i.cantitate_folosita = i.cantitate_folosita - nr;
	return i;
}

/*
 * 	string denumire;
	double pret_unitate;
	float cantitate_folosita;
	string unitate;
	
 */

void Ingredient::afisare()
{
	cout << "\ndenumire";
	cout << this->denumire;
	cout << "\npret unitate:";
	cout << this->pret_unitate;
	cout << "unitate";
	cout << this->unitate;
	cout << "\ncantitate folosita";
	cout << this->cantitate_folosita;
}

void Ingredient::citire()
{
	cout << "\ndenumire";
	cin>>this->denumire;
	cout << "\npret unitate:";
	cin >> this->pret_unitate;
	cout << "unitate";
	cin >> this->unitate;
	cout << "\ncantitate folosita";
	cin >> this->cantitate_folosita;
}
