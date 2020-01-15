#pragma once
#include <string>

using namespace std;
#include <iostream>
#include<vector>
#include<string>


class Ingredient
{
private:
	string denumire;
	double pret_unitate;
	float cantitate_folosita;
	string unitate;
public:
	Ingredient(string denumire="a",double pret=1,float cant=2,string un="a");


	Ingredient(const Ingredient& other)
		: denumire(other.denumire),
		  pret_unitate(other.pret_unitate),
		  cantitate_folosita(other.cantitate_folosita),
		  unitate(other.unitate)
	{
	}

	Ingredient(Ingredient&& other) noexcept
		: denumire(std::move(other.denumire)),
		  pret_unitate(other.pret_unitate),
		  cantitate_folosita(other.cantitate_folosita),
		  unitate(std::move(other.unitate))
	{
	}

	Ingredient& operator=(const Ingredient& other)
	{
		if (this == &other)
			return *this;
		denumire = other.denumire;
		pret_unitate = other.pret_unitate;
		cantitate_folosita = other.cantitate_folosita;
		unitate = other.unitate;
		return *this;
	}

	Ingredient& operator=(Ingredient&& other) noexcept
	{
		if (this == &other)
			return *this;
		denumire = std::move(other.denumire);
		pret_unitate = other.pret_unitate;
		cantitate_folosita = other.cantitate_folosita;
		unitate = std::move(other.unitate);
		return *this;
	}

	string get_denumire() const;
	void set_denumire(string denumire);
	double get_pret_unitate() const;
	void set_pret_unitate(double pret_unitate);
	float get_cantitate_folosita() const;
	void set_cantitate_folosita(float cantitate_folosita);
	string get_unitate() const;
	void set_unitate(string unitate);
	friend bool operator<(const Ingredient& a, const Ingredient& b);
	friend bool operator==(const Ingredient& a, const Ingredient& b);
	friend bool operator!=(const Ingredient& a, const Ingredient& b);
	friend bool operator<(const Ingredient& a, const Ingredient& b);
	friend std::ostream& operator<<(std::ostream& o, Ingredient& i);
	friend std::istream& operator>>(std::istream& o, Ingredient& i);
	friend Ingredient operator+(Ingredient& i, int nr);
	friend Ingredient operator-(Ingredient& i, int nr);
	//Prefix increment operator.
	Ingredient& operator++();
	// Postfix increment operator.
	Ingredient operator++(int);
	// Prefix decrement operator.
	Ingredient& operator--();
	// Postfix decrement operator.
	Ingredient operator--(int);
	
	void del();
	virtual void citire();
	virtual void afisare();




};




inline string Ingredient::get_denumire() const
{
	return denumire;
}

inline void Ingredient::set_denumire(string denumire)
{
	this->denumire = denumire;
}

inline double Ingredient::get_pret_unitate() const
{
	return pret_unitate;
}

inline void Ingredient::set_pret_unitate(double pret_unitate)
{
	this->pret_unitate = pret_unitate;
}

inline float Ingredient::get_cantitate_folosita() const
{
	return cantitate_folosita;
}

inline void Ingredient::set_cantitate_folosita(float cantitate_folosita)
{
	this->cantitate_folosita = cantitate_folosita;
}

inline string Ingredient::get_unitate() const
{
	return unitate;
}

inline void Ingredient::set_unitate(string unitate)
{
	this->unitate = unitate;
}

