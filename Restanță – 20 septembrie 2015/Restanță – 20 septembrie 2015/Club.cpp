#include "Club.h"
#include "Membru.h"

Club::Club()
{
	this->nr_pers = 1;
}

int Club::get_nr_pers() const
{
	return nr_pers;
}

void Club::set_nr_pers(int nr_pers)
{
	this->nr_pers = nr_pers;
}

vector<Persoana*> Club::get_pers1() const
{
	return pers;
}

void Club::set_pers1(vector<Persoana*> persoanas)
{
	pers = persoanas;
}

void Club::set_pers(vector<Persoana*> persoanas)
{
	pers = persoanas;
}

void Club::citire()
{
	cout << "Cate persoane sunt in baza de date? " << endl;
	cin >> this->nr_pers;
	for(int i=0;i<nr_pers;i++)
	{
		cout << "Membru(1) ,persoana(0)";
		int ch;
		cin >> ch;
		switch(ch)
		{
		case 1:
			{
			Membru* m = new Membru();
			m->citire();
			this->pers.push_back(m);
			break;
			}
		case 0:
			{
			Persoana* p = new Persoana;
			p->citire();
			this->pers.push_back(p);
			break;
			}
		}
	}
}

void Club::afisare()
{
	cout << endl << "Sunt " << this->nr_pers << " inregistrate" << endl;
	for(auto y:this->pers)
	{
		if(typeid(*y)==typeid(Persoana))
		{
			dynamic_cast<Persoana*>(y)->afisare();
		}

		if (typeid(*y) == typeid(Membru))
		{
			dynamic_cast<Membru*>(y)->afisare();
		}
	}
}

void Club::afis_cerinta()
{
	cout << endl << "Sunt " << this->nr_pers << " inregistrate" << endl;
	cout << "POTENTIAL CUMPARATOR";
	for (auto y : this->pers)
	{
		if (typeid(*y) == typeid(Persoana))
		{
			if ((dynamic_cast<Persoana*>(y)->get_nr_vizite() > 1)&&((dynamic_cast<Persoana*>(y)->get_nr_servicii() <1))) {
				dynamic_cast<Persoana*>(y)->afisare();
			}
		}
	}

	cout << "OCAZIONAL CUMPARATOR";
	for (auto y : this->pers)
	{
		if (typeid(*y) == typeid(Persoana))
		{
			if (dynamic_cast<Persoana*>(y)->get_nr_servicii() > 1) {
				dynamic_cast<Persoana*>(y)->afisare();
			}
		}
	}
	cout << "MEMBRI";
	for (auto y : this->pers)
	{
		if (typeid(*y) == typeid(Membru))
		{
			dynamic_cast<Membru*>(y)->afisare();
		}
	}
}

void Club::afis_party()
{
	for (auto y : this->pers)
	{
		if(typeid(*y)==typeid(Membru))
		{
			if(dynamic_cast<Membru*>(y)->get_tip_apartenenta()==2)
			{
				dynamic_cast<Membru*>(y)->afisare();
			}
		}
	}
}

void Club::afis_pierdere_membru()
{
	for (auto y : this->pers)
	{
		if (typeid(*y) == typeid(Membru))
		{
			if (dynamic_cast<Membru*>(y)->get_tip_apartenenta() == 1)
			{
				float m=dynamic_cast<Membru*>(y)->get_procent_plafon_minim();
				float reg = m * plafon_premium;
				if(dynamic_cast<Membru*>(y)->get_total_cheltuieli()<dynamic_cast<Membru*>(y)->get_procent_plafon_minim()*m)
				{
					dynamic_cast<Membru*>(y)->citire();
				}
			}
		}
	}
}

void Club::cumpara_serviciu()
{
	cout << "1)Mini-turneu 500 lei" << endl;
	int cost = 500;
	for(auto i:this->pers)
	{
		cout << "Doresti sa achizitionezi ceva? " << endl;
		int ch;
		switch (ch)
		{
		case 0:
			{
			break;
			}
		case 1:
			{
			int a = dynamic_cast<Membru*>(i)->get_tip_apartenenta();
				if(a==1)
				{
					cost = 0.8 * cost;
				}
				if (a == 2)
				{
					cost = 0.85 * cost;
				}
				if (a == 3)
				{
					cost = 0.9 * cost;
				}



				dynamic_cast<Membru*>(i)->set_total_cheltuieli(dynamic_cast<Membru*>(i)->get_total_cheltuieli() + cost);
				break;
			}
		}


	}
	
}
