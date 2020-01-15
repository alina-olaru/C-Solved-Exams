#include "Comanda.h"
#include <iostream>
#include <stdlib.h>
#include "Produs_comandat.h"



ostream& operator<<(ostream& out, const Comanda& com)
{
	out << com.numar_portii << endl;
	for (auto i:com.produs_comandat) 
	{
		i.afis();
	}
		

		return out;

		
}

iostream& operator>>(iostream& in, Comanda& com)
{
	std::cout << "\nNr itemuri comandate initial in aceasta comanda? ";
	in >> com.numar_portii;
	//am numar_portii de portii cu diferite mancaruri si cantitati
	for (int i = 0; i < com.numar_portii; i++)
	{
		Produs_comandat prod;


		string den;
		float pret;
		std::cout << "\nIntrodu denumirea ";
		in >> den;
		std::cout << "\nIntrodu pretul pentru " << den << " ";
		in >> pret;
		std::cout << "\nNr portii ";
		int nr_p;
		in >> nr_p;

		prod.set_denumire(den);
		prod.set_pret_portie(pret);
		prod.set_nr_portii_comandate_per_produs(nr_p);

		com.produs_comandat.push_back(prod);
	}
	return in;
}

Comanda operator+(Comanda com, int num)
{
	com.numar_portii = com.numar_portii + num;
	return com;


}

int Comanda::get_zi() const
{
	return zi;
}

void Comanda::set_zi(int zi)
{
	this->zi = zi;
}

int Comanda::get_luna() const
{
	return luna;
}

void Comanda::set_luna(int luna)
{
	this->luna = luna;
}

int Comanda::get_an() const
{
	return an;
}

void Comanda::set_an(int an)
{
	this->an = an;
}

int Comanda::get_suma1() const
{
	return suma;
}

void Comanda::set_suma1(int suma)
{
	this->suma = suma;
}

int Comanda::get_suma() const
{
	return suma;
}

void Comanda::set_suma(int suma)
{
	this->suma = suma;
}

vector<Produs_comandat> Comanda::get_produs_comandat() const
{
	return produs_comandat;
}

void Comanda::set_produs_comandat(vector<Produs_comandat> produs_comandats)
{
	produs_comandat = produs_comandats;
}

Comanda::Comanda()
{
	
	this->nr_comanda = 0;
	this->numar_portii = 0;
	this->an = 1999;
	this->zi = 1;
	this->luna = 1;
}

Comanda::Comanda(string nume, int nr_portii)
{
	

	this->numar_portii = nr_portii;
	cout << "Ati comandat " << this->numar_portii << " de ";
}
Comanda::Comanda(string nume, int nr_portii, int zi1 = 1, int luna1 = 1, int an1 = 1999)
{

	this->numar_portii = nr_portii;
	this->zi = zi1;
	this->an = an1;
	this->luna = luna1;
	cout << "Ati comandat " << this->numar_portii << " de ";
	cout << endl << "In data de " << zi << endl << luna << endl << an << endl;
}

void Comanda::citire_produs_comandat()
{
	cout << "\nNr itemuri comandate initial in aceasta comanda? ";
	cin >> this->numar_portii;
	//am numar_portii de portii cu diferite mancaruri si cantitati
	for(int i=0;i<this->numar_portii;i++)
	{
	Produs_comandat prod;


	string den;
		float pret;
		cout << "\nIntrodu denumirea ";
		cin >> den;
		cout << "\nIntrodu pretul pentru " << den << " ";
		cin >> pret;
		cout << "\nNr portii ";
		int nr_p;
		cin >> nr_p;
		
		prod.set_denumire(den);
		prod.set_pret_portie(pret);
		prod.set_nr_portii_comandate_per_produs(nr_p);

		produs_comandat.push_back(prod);
	}
}

void Comanda::afis()
{
	/*if(this->produs_comandat.size()==0)
	{
		cout << "e goala" << endl;
	}*/
	cout << endl << "\nNr portii " << this->numar_portii;
	for(int i=0;i<numar_portii;i++)
	{
		produs_comandat[i].afis();
		

	}
}

float Comanda::nota_plata()
{
	float suma = 0;
	for (int i = 0; i < numar_portii; i++)
	{
		int nr_por = (produs_comandat[i].get_nr_portii_comandate_per_produs());
		float pret = produs_comandat[i].get_pret_portie();
		float rez = nr_por * pret;
		suma = suma + rez;
	}cout << "\nSuma cheltuita: " << suma;
	this->suma = suma;
	return suma;
}

float Comanda::adauga_acelasi_produs()
{
	cout << endl << endl << endl << endl;
	cout << "ACELASI PRODUS";
	cout << endl << endl << endl << endl;
	for (int i = 0; i < numar_portii; i++)
	{
		cout << endl<<i + 1 << endl;
		produs_comandat[i].afis();


	}
	cout << "Introdu id-ul produsului ";
	int id; cin >> id;
	produs_comandat[id - 1].set_nr_portii_comandate_per_produs(produs_comandat[id - 1].get_nr_portii_comandate_per_produs() + 1);
	cout << endl << "Comanda schimbata " << endl;
	return produs_comandat[id - 1].get_nr_portii_comandate_per_produs();
}

void Comanda::sterge_produs_din_comanda()
{
	cout << endl << endl << endl << endl;
	cout << "STERGE DIN COMANDA";
	cout << endl << endl << endl << endl;
	while (1) {
		cout << "Introduceti -1 pt exit";
		cout << endl;
		cout << "Introduceti 1 pt continuare" << endl << "2 pt afisare";
		cout << endl;
		int ex; cin >> ex;
		if (ex == -1)
		{
			break;
		}
		if (ex == 2) {
			afis();
			break;
		}
		for (int i = 0; i < numar_portii; i++)
		{
			cout << endl << i + 1 << endl;
			produs_comandat[i].afis();


		}
		cout << "Introdu id-ul produsului ";
		int id; cin >> id;
		cout << "\nDoriti sa anulati doar o parte din portii sau pe toate?0-o parte,1-pe toate" << endl;
		int ch;
		cin >> ch;
		switch (ch)
		{
		case 0:
		{
			int nrp;
			cout << "Cate portii anulati? ";
			cin >> nrp;
			produs_comandat[id - 1].set_nr_portii_comandate_per_produs(produs_comandat[id - 1].get_nr_portii_comandate_per_produs() - nrp);
			break;
		}
		case 1:
		{

			cout << "Se anuleaza comanda produsului respectiv(totala)";
			this->produs_comandat.erase(this->produs_comandat.begin() + id - 1);
		
			this->set_nr_portii(this->get_nr_portii() - 1);
			break;
		}
		/*case 2:
			{
			afis();
			}
		}*/



		}
	}

}

void Comanda::sterge_ultima_comanda()
{
	cout << endl << endl << endl << endl;
	cout << "STERGE ULTIMA COMANDA";
	cout << endl << endl << endl << endl;
	produs_comandat.pop_back();
	this->set_nr_portii(this->get_nr_portii() - 1);
	afis();
}

void Comanda::del()
{
	this->produs_comandat.erase(this->produs_comandat.begin(),
		this->produs_comandat.end());
}

void Comanda::adauga_produs_comanda()
{
	cout << endl << endl << endl << endl;
	cout << "ADAUGA";
	cout << endl << endl << endl << endl;
	Produs_comandat prod;


	string den;
	float pret;
	cout << "\nIntrodu denumirea ";
	cin >> den;
	cout << "\nIntrodu pretul pentru " << den << " ";
	cin >> pret;
	cout << "\nNr portii ";
	int nr_p;
	cin >> nr_p;

	prod.set_denumire(den);
	prod.set_pret_portie(pret);
	prod.set_nr_portii_comandate_per_produs(nr_p);
	this->set_nr_portii(this->get_nr_portii() + 1);
	produs_comandat.push_back(prod);
	afis();
}
