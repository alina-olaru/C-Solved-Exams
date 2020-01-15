#pragma once
#include "Comanda.h"
#include <string>
#include<iostream>
using namespace std;
class Home:public Comanda 
{
public:
	Home();
	Home(const Home& other)
		: Comanda(other)
	{
	}

	Home(Home&& other) noexcept
		: Comanda(std::move(other))
	{
	}

	Home& operator=(const Home& other)
	{
		if (this == &other)
			return *this;
		Comanda::operator =(other);
		return *this;
	}

	Home& operator=(Home&& other) noexcept
	{
		if (this == &other)
			return *this;
		Comanda::operator =(std::move(other));
		return *this;
	}

	//Home(const Home& ob);
	Home(int a = 0, int b = 0, int c = 0);
	void Home_opreste(int);
	string Home_verificare();
	Home operator+(const int a);
	//Home operator+(std::string b);
	//istream& operator>>(istream& input, Home& a);
};

