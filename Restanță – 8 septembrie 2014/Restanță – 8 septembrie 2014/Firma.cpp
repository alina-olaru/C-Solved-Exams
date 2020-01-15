#include "Firma.h"
#include "TESA.h"
#include "LUCRATIV.h"
#include "Angajati_ora.h"
#include <algorithm>

int Firma::get_nr_ang() const
{
	return nr_ang;
}

void Firma::set_nr_ang(int nr_ang)
{
	this->nr_ang = nr_ang;
}

vector<Angajat*> Firma::get_angajati() const
{
	return angajati;
}

void Firma::set_angajati(vector<Angajat*> angajati)
{
	this->angajati = angajati;
}

void Firma::citire()
{
	cout << "\nCati angajati sunt in firma? ";
	cin >> this->nr_ang;
	for(int i=0;i<this->nr_ang;i++)
	{
		cout << "\nTip contract.\n1)Permanent\n2)Cu ora\n";
		int ch;
		cin >> ch;
		switch(ch)
		{
		case 1:
			{
			cout << "\n1)Tesa\n1)Lucrativ\n";
			int ch_2;
			cin >> ch_2;
				switch(ch_2)
				{
				case 1:
					{
					TESA* t = new TESA();
					t->citire();
					
					this->angajati.push_back(t);
					break;
					}
				case 2:
					{
					LUCRATIV* t = new LUCRATIV();
					t->citire();
					this->angajati.push_back(t);
					break;
					}
				}
				
				break;;
			}
		case 2:
			{
			Angajati_ora* t = new Angajati_ora();
			t->citire();
			this->angajati.push_back(t);
			break;
			}
			break;
		}
	}
}


void Firma::afisare()
{
	for(auto i:this->angajati)
	{
		if(typeid(*i)==typeid(LUCRATIV))
		{
			dynamic_cast<LUCRATIV*>(i)->afisare();
		}


		if (typeid(*i) == typeid(TESA))
		{
			dynamic_cast<TESA*>(i)->afisare();
		}

		if (typeid(*i) == typeid(Angajati_ora))
		{
			dynamic_cast<Angajati_ora*>(i)->afisare();
		}
	}
}

void Firma::afis_l()
{
	for(auto y:this->angajati)
	{
		if(typeid(*y)==typeid(LUCRATIV))
		{
			int nr = dynamic_cast<LUCRATIV*>(y)->get_nr_copii_minori();
			if(y>0)
			{
				dynamic_cast<LUCRATIV*>(y)->afisare();
			}
		}
	}
}

void Firma::afis_rez()
{
	for (auto y : this->angajati)
	{
		if(typeid(*y)==typeid(TESA))
		{
			int nr = dynamic_cast<TESA*>(y)->get_weekend();
			if(nr==3)
			{
				dynamic_cast<TESA*>(y)->afisare();
			}
		}
	}
}

void Firma::afis_2015()
{
	for(auto y:this->angajati)
	{
		if(typeid(*y)==typeid(Angajati_ora))
		{
			Data d = dynamic_cast<Angajati_ora*>(y)->get_data_terminare_proiect();
			if(d.get_t()>2015)
			{
				dynamic_cast<Angajati_ora*>(y)->afisare();
			}
			if((d.get_t()==2015)&&(d.get_s()>=3))
			{
				dynamic_cast<Angajati_ora*>(y)->afisare();
			}
		}
	}
}

void Firma::afisare_prima()
{
	for (auto y : this->angajati)
	{
		if (typeid(*y) == typeid(TESA))
		{
			cout << "\nCare este suma fixa pt acest angajat (prima?)";
			float x;
			cin >> x;
			cout << endl << "Va primi o prima in val. de " << x << " si weekend-ul " << dynamic_cast<TESA*>(y)->get_weekend() << " la munte";
		}


		if (typeid(*y) == typeid(LUCRATIV))
		{
			cout << "\nCare este suma fixa pt acest angajat (prima?)";
			float x;
			cin >> x;
			int nr_ani_vechime = 2014 - dynamic_cast<LUCRATIV*>(y)->get_hire_date().get_t();
			float spor = x / nr_ani_vechime;
			float rez = x + spor;
			cout << endl << "Va primi o prima in val. de " << rez << endl;
		}

		if (typeid(*y) == typeid(Angajati_ora))
		{
			cout << "\nCare este suma fixa pt acest angajat (prima?)";
			float x;
			cin >> x;
			if ((dynamic_cast<Angajati_ora*>(y)->get_hire_date().get_t() < 2014) ||
				(dynamic_cast<Angajati_ora*>(y)->get_hire_date().get_f() < 12) ||
				((dynamic_cast<Angajati_ora*>(y)->get_hire_date().get_f() == 12) &&
				((dynamic_cast<Angajati_ora*>(y)->get_hire_date().get_s() < 30))))
			{
				cout << endl << "Va primi o prima in val. de " << x / 2 << endl;
			}
			else {
				cout << endl << "Va primi o prima in val. de " << x << endl;
			}

		}
	}
}

/*
bool cmp(Angajat* a,Angajat*b)
{
	if(a->get_hire_date().get_t()<b->get_hire_date().get_t())
	
		//2014 2015
		{
			return true;
		}
		if ((a->get_hire_date().get_t() == b->get_hire_date().get_t())&&
			(a->get_hire_date().get_f()<b->get_hire_date().get_f()))
		{
			return true;
		}
		if (((a->get_hire_date().get_t() == b->get_hire_date().get_t()) &&
			(a->get_hire_date().get_f() == b->get_hire_date().get_f()))&&
			(a->get_hire_date().get_s()<=b->get_hire_date().get_s()))
		{
			return true;
		}
		return false;
	
}
void Firma::afisare_dupa_hire_date()
{//f s t
	
		sort(this->angajati.begin(), this->angajati.end(), cmp());
		afisare();

	
}
*/