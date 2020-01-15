#include "Singleton_organizatie.h"
#include "Ang_temp.h"
#include "Ang_permanent.h"

Singleton_organizatie::Singleton_organizatie()
{
	this->nr_ang = 0;
}

int Singleton_organizatie::get_nr_ang() const
{
	return nr_ang;
}

void Singleton_organizatie::set_nr_ang(int nr_ang)
{
	this->nr_ang = nr_ang;
}

vector<Angajat_base*> Singleton_organizatie::get_ang() const
{
	return ang;
}

void Singleton_organizatie::set_ang(vector<Angajat_base*> angajat_bases)
{
	ang = angajat_bases;
}



void Singleton_organizatie::citire()
{
	cout << "Nr de angajati: ";
	cin >> this->nr_ang;
	for(int i=0;i<this->nr_ang;i++)
	{
		cout << "\nangajat temporar(1) sau angajat permanent(2) " << endl;
		int ch;
		cin >> ch;
		switch(ch)
		{
		case 1:
			{
			Ang_temp* a=new Ang_temp();
			a->citire();
			this->ang.push_back(a);
			break;
			}
		case 2:
			{
			Ang_permanent* a = new Ang_permanent();
			a->citire();
			this->ang.push_back(a);
			break;
				
			}
		}
	}
}


void Singleton_organizatie::afisare()
{
	cout << "Nr de angajati: ";
	cout << this->nr_ang;
	for(auto i:this->ang)
	{
		i->afisare();
	}

}

void Singleton_organizatie::Add_angajat()
{
	cout << endl;
	cout << "\nangajat temporar(1) sau angajat permanent(2) " << endl;
	int ch;
	cin >> ch;
	switch (ch)
	{
	case 1:
	{
		Ang_temp* a = new Ang_temp();
		a->citire();
		this->ang.push_back(a);
		break;
	}
	case 2:
	{
		Ang_permanent* a = new Ang_permanent();
		a->citire();
		this->ang.push_back(a);
		break;

	}
	}
}

void Singleton_organizatie::afis_temp()
{
	cout << "\n\n\nANGAJATII TEMPORARI" << endl;
	for(auto i:this->ang)
	{
		if(typeid(*i)==typeid(Ang_temp))
		{
			i->afisare();
		}
		
	}
}

void Singleton_organizatie::afis_perm()
{
	cout << "\n\n\nANGAJATII PERMANENTI" << endl;
	for (auto i : this->ang)
	{
		if (typeid(*i) == typeid(Ang_permanent))
		{
			i->afisare();
		}

	}
}

void Singleton_organizatie::incetare_contrat(int luna_data)
{
	
	for (auto i : this->ang)
	{
		if (typeid(*i) == typeid(Ang_temp))
		{
			
				int luna_term=dynamic_cast<Ang_temp*>(i)->get_data_term_contract().get_second();
				if(luna_term==luna_data)
				{
					i->afisare();
				}
			
		}

	}
}

void Singleton_organizatie::fara_ore()
{
	
	for (auto i : this->ang)
	{
		if (typeid(*i) == typeid(Ang_temp))
		{
			int dim = dynamic_cast<Ang_temp*>(i)->get_nr_ore_lucrate().size();
			if((dynamic_cast<Ang_temp*>(i)->get_nr_ore_lucrate().at(dim-1)==0)&&
				(dynamic_cast<Ang_temp*>(i)->get_nr_ore_lucrate().at(dim - 2) == 0)&&
				(dynamic_cast<Ang_temp*>(i)->get_nr_ore_lucrate().at(dim - 3) == 0))
			{
				i->afisare();
			}
			
		}

	}
}

void Singleton_organizatie::bonus_luna(int luna)
{


	for(auto y:this->ang)
	{
		if(typeid(*y)==typeid(Ang_permanent))
		{
			if(dynamic_cast<Ang_permanent*>(y)->get_istoric_bonusuri().at(luna-1)!=0)
			{
				y->afisare();
			}
		}
	}
}

void Singleton_organizatie::afisare_bonusuri()
{
	for(auto y:this->ang)
	{
		
		if(typeid(*y)==typeid(Ang_permanent))
		{
			vector<float> z=dynamic_cast<Ang_permanent*>(y)->get_istoric_bonusuri();
			for (auto b : z)
			{
				if (b != 0)
				{
					if (b * dynamic_cast<Ang_permanent*>(y)->get_salariu_fix() <= dynamic_cast<Ang_permanent*>(y)->get_procent_bonus()) {
						y->afisare();
						cout << endl;
						cout << "\nA primit " << b * dynamic_cast<Ang_permanent*>(y)->get_salariu_fix();
					}
				}
			}
		}
	}
}
