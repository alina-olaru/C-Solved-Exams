#include "manager_singleton.h"
#include "Candidat_IF2.h"
#include "Candidat_ID.h"
#include "Candidat_ID2.h"
#include <algorithm>

manager_singleton::manager_singleton()
{
}

manager_singleton* manager_singleton::get_instance()
{
	if (instance == NULL)
		instance = new manager_singleton();
	return instance;
}

void manager_singleton::citire()
{
	cout << "\ncati aplicanti sunt? " << endl;
	cin >> this->nr_aplicanti;
	for (int i = 0; i < nr_aplicanti; i++)
	{
		cout << "Tastati 1 pentru a introduce un candidat la IF\n"
			<< "Tastati 2 pentru a introduce un candidat la IF la a doua fac\n"
			<< "Tastati 3 pentru a introduce un candidat la ID\n"
			<< "Tastati 3 pentru a introduce un candidat la ID la a doua fac\n";

		int chs;
		cin >> chs;
		switch (chs)
		{
		case 1: {
			Candidat_IF* Can = new Candidat_IF();
			Can->citire();
			//cin >> Can;
			C.push_back(Can);
			break;
		}
		case 2:
		{
			Candidat_IF2* Can = new Candidat_IF2();
			//cin >> Can;
		//	dynamic_cast<Candidat_IF2*>(Can)->citire();
			Can->citire();
			C.push_back(Can);
			break;
		}
		case 3:
		{
			Candidat_ID* Can = new Candidat_ID();
			Can->citire();

			//cin >> Can;
			C.push_back(Can);
			break;
		}
		case 4: {
			Candidat_ID2* Can = new Candidat_ID2();
			//cin >> Can;
			Can->citire();

			C.push_back(Can);
			break;

		}
		}
	}
}

bool cmp(Candidat* a, Candidat* b)
{
	//return true;
	if (a->get_dat().get_t() < b->get_dat().get_t())
		return true;//a->get_dat().get_t() - b->get_dat().get_t();

	if (a->get_dat().get_s() < b->get_dat().get_s())
		return true;//return a->get_dat().get_s() - b->get_dat().get_s();


	if (a->get_dat().get_f() < b->get_dat().get_f())
		return true;//return a->get_dat().get_f() - b->get_dat().get_f();
	return false;
}


void manager_singleton::qsortt()
{
	sort(this->C.begin(), this->C.end(), cmp);
	afisare();
}

void manager_singleton::afisare_admisi()
{
	for(auto y:this->C)
	{
		if(y->calcul_medie()>5)
		{
			y->afisare();
		}
	}
}

void manager_singleton::delete_baza_de_date()
{
	while(!this->C.empty())
	{
		C.pop_back();
	}
}

manager_singleton& manager_singleton::operator++()
{
	this->nr_aplicanti++;
	//add_cand
	return *this;
}

manager_singleton manager_singleton::operator++(int a)
{
	manager_singleton h = *this;
	++(this->nr_aplicanti);
	return h;
}

manager_singleton& manager_singleton::operator--()
{
	this->nr_aplicanti--;
	this->C.pop_back();
	return *this;
}

manager_singleton manager_singleton::operator--(int)
{
	manager_singleton h = *this;
	--(this->nr_aplicanti);
	return h;
}


void manager_singleton::afisare()
{
	if(this->C.empty())
	{
		cout << "\nnu exista st. in bd";
		return;
	}
	for(auto y:this->C)
	{
		y->afisare();
	}
}



manager_singleton* manager_singleton::instance = NULL;
