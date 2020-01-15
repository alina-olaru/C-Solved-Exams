#pragma once
#include <string>
#include <vector>
#include "Produs_comandat.h"

using namespace std;
#include "Produs.h"
#include "Comanda.h"
#include <iostream>
#include "Produs.h"
#include <stdlib.h>

class Comanda
{
	int nr_comanda;
//	Produs* produs_comandat;
	vector<Produs_comandat> produs_comandat;
	//numar_portii=nr comenzi
	int numar_portii;
	int zi;
	int luna;
	int an;
	int suma = 0;
public:


	int get_zi() const;
	void set_zi(int zi);
	int get_luna() const;
	void set_luna(int luna);
	int get_an() const;
	void set_an(int an);
	int get_suma1() const;
	void set_suma1(int suma);
	int get_suma() const;
	void set_suma(int suma);
	vector<Produs_comandat> get_produs_comandat() const;
	void set_produs_comandat(vector<Produs_comandat> produs_comandats);
	Comanda();
	Comanda(string, int);
	Comanda(string, int, int, int, int);
	int get_nr_comanda() {
		return this->nr_comanda;
	}
	void set_nr_comanda(int a) {
		this->nr_comanda = a;
	}
	int get_nr_portii() {
		return this->numar_portii;
	}
	void set_nr_portii(int a) {
		this->numar_portii = a;
	}
	virtual void citire_produs_comandat();
	virtual void afis();
	//friend class Produs;
	friend Comanda operator+(Comanda com,int num);
	// Comanda& operator++(Comanda &com);
	//PREFIX
	void operator++() {
		numar_portii++;
		
	}
//POSTFIX
	Comanda* operator++(int) {
		Comanda* c=new Comanda();
		c->numar_portii = numar_portii++;
		return c;
	}

	
	float nota_plata();
	void adauga_produs_comanda();
	float adauga_acelasi_produs();
	void sterge_produs_din_comanda();
	void sterge_ultima_comanda();
	void del();
	friend ostream& operator<<(ostream& out, const Comanda& com);
	friend iostream& operator>>(iostream& in, Comanda& com);
	

};

