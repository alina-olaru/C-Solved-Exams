#include "Medic_familie.h"
#include "Copii.h"
#include "Adulti.h"
#include <iostream>
#include <typeinfo>


void Medic_familie::afisare()
{
	for(auto i:this->pacienti)
	{
		if(typeid(*i)==typeid(Copii))
		{
			dynamic_cast<Copii*>(i)->afisare();
		}
		if(typeid(*i)==typeid(Adulti))
		{
			dynamic_cast<Adulti*>(i)->afisare();
		}
		else
		{
			cout << "Nicaieri ";
		}
		//i->afisare();
	}
}

Medic_familie::Medic_familie()
{
	this->nr_pacienti = 5;
}

int Medic_familie::get_nr_pacienti() const
{
	return nr_pacienti;
}

void Medic_familie::set_nr_pacienti(int nr_pacienti)
{
	this->nr_pacienti = nr_pacienti;
}

vector<Pacient*> Medic_familie::get_pacienti1() const
{
	return pacienti;
}

void Medic_familie::set_pacienti1(vector<Pacient*> pacienti)
{
	this->pacienti = pacienti;
}

void Medic_familie::afisare_adulti_risc()
{
	for(auto i:this->pacienti)
	{
		if(typeid(*i)==typeid(Adulti))
		{
			if (i->get_varsta() > 40) {
				//	dynamic_cast<Copii*>(i)->afisare();
				int niv_fum = dynamic_cast<Adulti*>(i)->get_fumator();
				int niv_sed = dynamic_cast<Adulti*>(i)->get_nivel_sedentarism();
				if ((niv_fum == 1) && ((niv_sed == 2) || (niv_sed == 1)))
				{
					i->afisare();
				}
			}
		}
	}
}

void Medic_familie::afisare_copii_risc()
{
	for(auto i:this->pacienti)
	{
		if(typeid(*i)==typeid(Copii))
		{
			int antecedente = dynamic_cast<Copii*>(i)->get_nr_precedenti_cardiovascular();
			if(antecedente>0)
			{
				i->afisare();
			}
			int cr = dynamic_cast<Copii*>(i)->get_cr();
			if(cr>60)
			{
				i->afisare();
			}
		}
	}
}

void Medic_familie::afisare_dupa_nume(string nume)
{

for(auto y:this->pacienti)
{
	if(y->get_nume()==nume)
	{
		y->afisare();
	}
}
}

void Medic_familie::afis_cerinta()
{
	cout << endl << "ADULTI " << endl;
	for(auto i :this->pacienti)
	{
		if(typeid(*i)==typeid(Adulti))
		{
			if (dynamic_cast<Adulti*>(i)->get_varsta() > 40) {
				cout << "ADULTI PESTE 40: ";
				cout << i->get_nume() << " nume\n";
				int sed = dynamic_cast<Adulti*>(i)->get_nivel_sedentarism();
				cout << "Sedentarism: ";
				if (sed == 0)
				{
					cout << "scazut";
				}
				if (sed == 1)
				{
					cout << "Mediu ";

				}
				if (sed == 2)
				{
					cout << "CRESCUT";
				}
				cout << "\nRisc: ";

				if (i->get_varsta() > 40) {
					//	dynamic_cast<Copii*>(i)->afisare();
					int niv_fum = dynamic_cast<Adulti*>(i)->get_fumator();
					int niv_sed = dynamic_cast<Adulti*>(i)->get_nivel_sedentarism();
					if ((niv_fum == 1) && ((niv_sed == 2) || (niv_sed == 1)))
					{
						cout << "DA";
					}
					else {
						cout << "NU";
					}
				}
			}





			
		}
	}




	for (auto i : this->pacienti)
	{
		if (typeid(*i) == typeid(Adulti))
		{
			if (dynamic_cast<Adulti*>(i)->get_varsta() < 40) {
				cout << "ADULTI sub 40: ";
				cout << i->get_nume() << " nume\n";
				int sed = dynamic_cast<Adulti*>(i)->get_nivel_sedentarism();
				cout << "Sedentarism: ";
				if (sed == 0)
				{
					cout << "scazut";
				}
				if (sed == 1)
				{
					cout << "Mediu ";

				}
				if (sed == 2)
				{
					cout << "CRESCUT";
				}
				cout << "\nRisc: ";

				if (i->get_varsta() > 40) {
					//	dynamic_cast<Copii*>(i)->afisare();
					int niv_fum = dynamic_cast<Adulti*>(i)->get_fumator();
					int niv_sed = dynamic_cast<Adulti*>(i)->get_nivel_sedentarism();
					if ((niv_fum == 1) && ((niv_sed == 2) || (niv_sed == 1)))
					{
						cout << "DA";
					}
					else {
						cout << "NU";
					}
				}
			}






		}
	}
}

void Medic_familie::citire()
{
	cout << "Nr pacienti : ";
	cin >> this->nr_pacienti;
	for(int i=0;i<this->nr_pacienti;i++)
{
		cout << "\nCopil(1) adult (2) ";
		int ch;
		cin >> ch;
		switch(ch)
		{
		case 1:
			{
			Copii* c=new Copii();
			c->citire();
			this->pacienti.push_back(c);
			break;
			}



		case 2:
			{
			Adulti* a=new Adulti();
			//a.citire();
			a->citire();
			this->pacienti.push_back(a);
			break;
			}
		}
}
	
}

