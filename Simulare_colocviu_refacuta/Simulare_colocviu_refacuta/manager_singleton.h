#pragma once
#include "Candidat.h"
#include "Candidat_IF.h"


class manager_singleton {

private:
    static manager_singleton* instance;
    vector<Candidat*> C;
    int nr_aplicanti;

public:
    manager_singleton();
    static manager_singleton* get_instance();
	
    void citire();
    void afisare();
    void qsortt();
    void afisare_admisi();



	void delete_baza_de_date();
	//Prefix increment operator.
	manager_singleton& operator++();
	// Postfix increment operator.
	manager_singleton operator++(int);
	// Prefix decrement operator.
	manager_singleton& operator--();
	// Postfix decrement operator.
	manager_singleton operator--(int);



	
};

