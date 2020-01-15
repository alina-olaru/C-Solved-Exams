#include "Librarie.h"
#include "Carti.h"
#include "Articole.h"
#include "PaginiWEB.h"


Librarie::Librarie()
{
	this->nr_referinte = 1;
}

int Librarie::get_nr_referinte1() const
{
	return nr_referinte;
}

void Librarie::set_nr_referinte1(int nr_referinte)
{
	this->nr_referinte = nr_referinte;
}

std::vector<Referinta*> Librarie::get_referinte() const
{
	return referinte;
}

void Librarie::set_referinte(std::vector<Referinta*> referintas)
{
	referinte = referintas;
}

void Librarie::afisare()
{

	for(auto i:this->referinte)
	{
		if(typeid(*i)==typeid(Articole))
		{
			dynamic_cast<Articole*>(i)->afisare();
		}
		if(typeid(*i)==typeid(PaginiWEB))
		{
			dynamic_cast<PaginiWEB*>(i)->afisare();
		}
		if(typeid(*i)==typeid(Carti))
		{
			dynamic_cast<Carti*>(i)->afisare();
		}
	}
	
}

void Librarie::afis_dupa_an(int annn)
{

	for (auto i : this->referinte)
	{
		if (i->get_format() == 0) {
			int an;
			if (typeid(*i) == typeid(Articole))
			{
				an = dynamic_cast<Articole*>(i)->get_an_publicare();
			}

			if (typeid(*i) == typeid(Carti))
			{
				an = dynamic_cast<Carti*>(i)->get_an_publicare();
			}


			if (annn = an)
			{
				if (typeid(*i) == typeid(Articole))
				{
					dynamic_cast<Articole*>(i)->afisare();
				}
				if (typeid(*i) == typeid(PaginiWEB))
				{
					dynamic_cast<PaginiWEB*>(i)->afisare();
				}
				if (typeid(*i) == typeid(Carti))
				{
					dynamic_cast<Carti*>(i)->afisare();
				}
			}
		}
	}
}

void Librarie::afis_elect()
{


	for (auto i : this->referinte)
	{
		if (i->get_format() == 1) {
			
			if (typeid(*i) == typeid(Articole))
			{
				dynamic_cast<Articole*>(i)->afisare();
			}
			if (typeid(*i) == typeid(PaginiWEB))
			{
				dynamic_cast<PaginiWEB*>(i)->afisare();
			}
			if (typeid(*i) == typeid(Carti))
			{
				dynamic_cast<Carti*>(i)->afisare();
			}


			
		}
	}
}

void Librarie::afis_elect(string aaa)
{

	for (auto i : this->referinte)
	{

		if (i->get_format() == 1) {



			if (typeid(*i) == typeid(Articole))
			{
				vector<string> a = dynamic_cast<Articole*>(i)->get_nume();
				for (auto y : a) {
					string first = y.substr(0, y.find(' '));
					if (first == aaa)
					{
						dynamic_cast<Articole*>(i)->afisare();
					}
				}

			}
			if (typeid(*i) == typeid(PaginiWEB))
			{

				string a = dynamic_cast<PaginiWEB*>(i)->get_nume_proprietar();

				if (a == aaa)
				{
					dynamic_cast<PaginiWEB*>(i)->afisare();
				}


			}
			if (typeid(*i) == typeid(Carti))
			{
				vector<string> a = dynamic_cast<Carti*>(i)->get_autori();
				for (auto y : a) {
					string first = y.substr(0, y.find(' '));
					if (first == aaa)
					{
						dynamic_cast<Carti*>(i)->afisare();
					}



				}

			}

		}


	}

}







void Librarie::citire()
{
	cout << "\nCate referinte aveti initial: ";
	cin >> this->nr_referinte;
	for(int i=0;i<this->nr_referinte;i++)
	{
		cout << "\nAveti de ales dintre 3 variante\n";
		cout << "1)CARTE" << endl;
		cout << "2)ARTICOL" << endl;
		cout << "3)PAGINA WEB" << endl;
		int ch;
		cin >> ch;
		switch(ch)
		{
		case 1:
			{
			Carti* c = new Carti();
			c->citire();
			this->referinte.push_back(c);
			break;
			}
		case 2:
			{
			Articole* c = new Articole();
			c->citire();
			this->referinte.push_back(c);
			break;
			}
		case 3:
			{
			PaginiWEB* c = new PaginiWEB;
			c->citire();
			this->referinte.push_back(c);
			break;
			}
		}
	}
}
