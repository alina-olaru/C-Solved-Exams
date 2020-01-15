// SUBIECT_– 29_mai_2014.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include<vector>
using namespace std;
#include <string>
#include <iostream>
#include "Medic_familie.h"

int main()
{
	Medic_familie m;
	m.citire();
	m.afisare();
	m.afisare_adulti_risc();
	cout << endl << endl << endl << endl;
	m.afisare_copii_risc();
}

