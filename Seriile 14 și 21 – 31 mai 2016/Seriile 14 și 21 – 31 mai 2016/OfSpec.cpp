#include "OfSpec.h"
#include "PizzaSpec.h"

OfSpec::OfSpec()
{
}

std::vector<Pizza*> OfSpec::get_sortiment_pizza() const
{
	return sortiment_pizza;
}

void OfSpec::set_sortiment_pizza(std::vector<Pizza*> sortiment_pizza)
{
	this->sortiment_pizza = sortiment_pizza;
}

vector<Bautura*> OfSpec::get_bautura() const
{
	return bautura;
}

void OfSpec::set_bautura(vector<Bautura*> bauturas)
{
	bautura = bauturas;
}

int OfSpec::get_nr_oferte_cumparate() const
{
	return nr_oferte_cumparate;
}

void OfSpec::set_nr_oferte_cumparate(int nr_oferte_cumparate)
{
	this->nr_oferte_cumparate = nr_oferte_cumparate;
}

void OfSpec::citire()
{
	cout << "cate oferte achizitionati? ";
	cin >> this->nr_oferte_cumparate;
	for(int i=0;i<nr_oferte_cumparate;i++)
	{
		cout << "\n1)standard\n2)speciala\n";
		int ch; cin >> ch;
		switch(ch)
		{
		case 1:
			{
			Pizza* p = new Pizza();
			p->citire();
			this->sortiment_pizza.push_back(p);
			break;
			}
		case 2:
			{
			PizzaSpec* p = new PizzaSpec();
			p->citire();
			this->sortiment_pizza.push_back(p);
			break;
			}
		}
		Bautura* b = new Bautura();
		b->citire_b();
		this->bautura.push_back(b);
	}
}

void OfSpec::afisare()
{
	cout << "\\n\n\n\n\n\nAFISARE:";
	cout << "\nnr oferte: ";
	cout<< this->nr_oferte_cumparate;
	for(auto y:this->sortiment_pizza)
	{
		y->afisare();
	}
	for(auto y:this->bautura)
	{
		y->afis_b();
	}
}

void OfSpec::afis_ingrediente()
{
	cout << "INGREDIENTE " << endl;
	for(auto y:this->sortiment_pizza)
	{
		dynamic_cast<Ingredient*>(y)->afisare();
	}
}

void OfSpec::afis_basic()
{
	for(auto y:this->sortiment_pizza)
	{
		if(typeid(*y)==typeid(Pizza))
		{
			y->afisare();
		}
	}
}

void OfSpec::afis_comp_cu_nr_ingr()
{
	for(auto y:this->sortiment_pizza)
	{
		if(typeid(*y)==typeid(PizzaSpec))
		{
			cout << endl << "SPECIALA" << endl;
			
		}
		if(typeid(*y)==typeid(Pizza))
		{
			cout << endl << "Basic" << endl;
		}
		cout << "\nare " << y->get_nr_ing() << " ingrediente: ";
	for(auto a:y->get_ingrediente())
	{
		a->afisare();
	}
	}
}

void OfSpec::afis_comp_cu_nr_ingr(Pizza* y)
{

		if (typeid(*y) == typeid(PizzaSpec))
		{
			cout << endl << "SPECIALA" << endl;

		}
		if (typeid(*y) == typeid(Pizza))
		{
			cout << endl << "Basic" << endl;
		}
		cout << "\nare " << y->get_nr_ing() << " ingrediente: ";
		for (auto a : y->get_ingrediente())
		{
			a->afisare();
		}
	
}

void OfSpec::afis_castig_oferta_Spec()
{
	for(auto y:this->sortiment_pizza)
	{
		if(typeid(*y)==typeid(PizzaSpec))
		{
			cout << "\n\nINGREDIENTE SPECIALE: ";
			vector<Ingredient*>a = dynamic_cast<PizzaSpec*>(y)->get_ingrediente_suplimentare();
			for(auto i:a)
			{
				i->afisare();
			}
		}
		int suma = 0;
		vector<Ingredient*>a = dynamic_cast<Pizza*>(y)->get_ingrediente();
		for(auto i:a)
		{
			suma = suma + i->get_cantitate_folosita() * i->get_pret_unitate();
		}

		cout << "pt pizza " << y->get_denumire_pizza()
		<<"se consuma "<<suma<<" se cere"<<suma*1.5
		<< " suma ceruta dupa discount este: "<<1.5*suma*0.75<<endl;
		
	}
}

void OfSpec::afis_spec()
{
	for (auto y : this->sortiment_pizza)
	{
		if (typeid(*y) == typeid(PizzaSpec))
		{
			y->afisare();
		}
	}
	
}
