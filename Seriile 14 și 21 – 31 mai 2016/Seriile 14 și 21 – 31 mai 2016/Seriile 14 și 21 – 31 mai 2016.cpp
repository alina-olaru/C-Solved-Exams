// Seriile 14 și 21 – 31 mai 2016.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Ingredient.h"
#include "Pizza.h"
#include "OfSpec.h"
using namespace std;
int main()
{/*
    Ingredient lista[5] = { Ingredient("piept de pui", 15, 1,"kg"),
    	Ingredient("sare",0.75, 10,
            "gram"), Ingredient("salam",1.5,5, "felii"),
    	lista[2], Ingredient() }, i1("sunca", 3, 2, "felii");
	
   std::cin >> lista[4]; // se citește un nou ingredient
    //lista[3] = lista[3] + 3; // se adaugă 3 felii de salam la ingredient
   lista[1] = lista[1] + 3;
   lista[1]++;
   lista[1] = lista[1] - 1;
  // Pizza p1("Rustica");	// se crează un sortiment nou de pizza 
 //  Pizza p2 = p1, p3; // se crează două sortimente noi de pizza, dintre care unul cu aceleași ingrediente ca pizza p1
 */

    OfSpec a;
    a.citire();
    a.afisare();
    a.afis_castig_oferta_Spec();
    a.afis_comp_cu_nr_ingr();
}

