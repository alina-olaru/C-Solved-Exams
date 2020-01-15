// Seria 14 – 28 mai 2014.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <vector>
#include <iostream>
#include "Librarie.h"
using namespace std;

int main()
{
    Librarie l;
	l.citire();
	//l.afisare();
	//cout << endl << "2.	A afișa toate referințele în format tipărit, publicate într-un an dat" << endl;
	//l.afis_dupa_an(2000);
	//cout << endl << "4.	A afișa toate referințele în format electronic care au numele proprietarului egal cu un nume dat.";
	l.afis_elect("Alina");
}

