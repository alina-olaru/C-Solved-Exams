#pragma once
#include<typeinfo>
#include<vector>
#include<string>
#include<iostream>
#include "Angajat.h"
using namespace std;



class Angajati_ora:public Angajat 
{
private:
    Data data_terminare_proiect;
public:

    Angajati_ora(Data data_terminare_proiect)
	    : data_terminare_proiect(data_terminare_proiect)
    {
    }


    Angajati_ora() = default;


    Data get_data_terminare_proiect() const;
    void set_data_terminare_proiect(Data data_terminare_proiect);

    void citire() override;
	void afisare() override;


};

