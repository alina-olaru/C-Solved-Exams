#include "Contract.h"
#include "Casa.h"
#include "Apartament.h"
#include <iostream>

using namespace std;


double Contract::calc_pret()
{
	if(this->tip_contract==0)
	{
		//chirie
		int discount;
		int nr_ani = this->data_final.get_t() - this->data_inceput.get_t();
		if ((nr_ani > 1) && (nr_ani < 2)) discount = 5;
		if (nr_ani > 2) discount = 10;
		if(tip_proprietate==0)
		{
			//casa

			for(auto y:this->p)
			{
				int nr_niv=dynamic_cast<Casa*>(y)->get_nr_niveluri();
				int mp_per_nivel=dynamic_cast<Proprietate*>(y)->get_suprafata_mp();
				int mp_locuil = nr_niv * mp_per_nivel;
				int mp_curte =dynamic_cast<Casa*>(y)->get_suprafata_curte();
				int chirie_mp = dynamic_cast<Casa*>(y)->get_chirie_mp();
				return chirie_mp * (mp_locuil + 0.2 * mp_curte) * (1 - discount);
				
			}
		}
		if(tip_proprietate==1)
		{
			for (auto y : this->p)
			{
				int val_chirie = dynamic_cast<Apartament*>(y)->get_chirie_mp();
				int mp_per_nivel = dynamic_cast<Apartament*>(y)->get_suprafata_mp();
				
				return val_chirie*mp_per_nivel * (1 - discount);

			}
		}
	}
	if (this->tip_contract == 1)
	{
		int discount_vanzare;
		if ((this->data_final.get_t() == this->data_inceput.get_t()) &&
			(this->data_final.get_s() == this->data_inceput.get_s()) &&
			(this->data_final.get_f() == this->data_inceput.get_f()))
		{
			discount_vanzare = 10;

		}
		if ((this->data_final.get_t() - this->data_inceput.get_t() < 5) && ((this->data_final.get_t() - this->data_inceput.get_t() > 1)))
		{
			discount_vanzare = 7;
		}
		if ((this->data_final.get_t() - this->data_inceput.get_t() < 10) && (this->data_final.get_t() - this->data_inceput.get_t() > 6))
		{
			discount_vanzare = 5;
		}
		int ch;
		for (auto y : this->p)
		{
			
			if (tip_proprietate == 0)
			{
				 ch = dynamic_cast<Casa*>(y)->get_chirie_mp();
			}
			if (tip_proprietate == 1)
			{
				 ch = dynamic_cast<Apartament*>(y)->get_chirie_mp();
			}
		}
		return 240 * ch * (1 - discount_vanzare);
	}
}

void Contract::citire()
{
	cout << "\n0 pt inchiriere\n1 pt vanzare-cumparare";
	cin >> this->tip_contract;
	cout << "\n0 pt casa,\n1 pt apartament";
	cin >> this->tip_proprietate;
	if(this->tip_proprietate==0)
	{
		Casa* c = new Casa();
		c->citire();
		this->p.push_back(c);
	}
	if (this->tip_proprietate == 1)
	{
		Apartament* c = new Apartament();
		c->citire();
		this->p.push_back(c);
	}
}

void Contract::afisare()
{
	cout << "\n0 pt inchiriere\n1 pt vanzare-cumparare";
	cout << this->tip_contract;
	cout << "\n0 pt casa,\n1 pt apartament";
	cout << this->tip_proprietate;
	for(auto y:this->p)
	{
		y->afisare();
	}
	if(tip_contract==0)
	{
		cout << "\nchirie lunara: " << this->suma_lunara;
	}
	if(tip_contract==1)
	{
		cout << "suma totala: " << this->suma_totala;
	}
}

void Contract::afisare_cerinta()
{
	cout << "INCHIRIERI: ";
	for (auto y : this->p)
	{
		if(tip_contract==0)
		{
			y->afisare();
		}
	}
	cout << "VANZARI ";
	for (auto y : this->p)
	{
		if (tip_contract == 1)
		{
			y->afisare();
		}
	}
}

std::string Contract::get_nume_client() const
{
	return nume_client;
}

void Contract::set_nume_client(std::string nume_client)
{
	this->nume_client = nume_client;
}

Data Contract::get_data_inceput() const
{
	return data_inceput;
}

void Contract::set_data_inceput(Data data_inceput)
{
	this->data_inceput = data_inceput;
}

Data Contract::get_data_final() const
{
	return data_final;
}

void Contract::set_data_final(Data data_final)
{
	this->data_final = data_final;
}

int Contract::get_tip_contract() const
{
	return tip_contract;
}

void Contract::set_tip_contract(int tip_contract)
{
	this->tip_contract = tip_contract;
}

int Contract::get_suma_totala() const
{
	return suma_totala;
}

void Contract::set_suma_totala(int suma_totala)
{
	this->suma_totala = suma_totala;
}

int Contract::get_suma_lunara() const
{
	return suma_lunara;
}

void Contract::set_suma_lunara(int suma_lunara)
{
	this->suma_lunara = suma_lunara;
}

int Contract::get_tip_proprietate() const
{
	return tip_proprietate;
}

void Contract::set_tip_proprietate(int tip_proprietate)
{
	this->tip_proprietate = tip_proprietate;
}

std::vector<Proprietate*> Contract::get_p() const
{
	return p;
}

void Contract::set_p(std::vector<Proprietate*> proprietates)
{
	p = proprietates;
}
