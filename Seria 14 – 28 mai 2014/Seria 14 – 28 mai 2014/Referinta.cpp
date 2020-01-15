#include "Referinta.h"
#include <iostream>
#include<string>
#include <vector>
#include <iostream>
#include<typeinfo>
#include "PaginiWEB.h"
using namespace std;

int Referinta::get_format() const
{
	return format;
}

void Referinta::set_format(int format)
{
	this->format = format;
}

Referinta::Referinta()
{
	this->format = 1;
}

void Referinta::citire()
{
	if(typeid(*this)==typeid(PaginiWEB))
	{
		this->format = 1;
		return;
	}
	std::cout << "\nMaterialele bibliografice pot fi în format tipărit(0)sau în format electronic, pe Internet.(1)";
	cin >> this->format;
}


void Referinta::afisare()
{
	if(this->format==0)
	{
		cout << "\nFORMAT TIPARIT" << endl;
	}
	if (this->format == 1)
	{
		cout << "\nFORMAT ELECTRONIC" << endl;
	}
	
}
