#include "Candidat.h"
#include "Candidat_IF.h"
#include "Candidat_IF2.h"
#include "Candidat_ID.h"
#include "Candidat_ID2.h"
#include <sstream> 
string Candidat::get_nume() const
{
	return nume;
}

void Candidat::set_nume(string nume)
{
	this->nume = nume;
}

string Candidat::get_serie_ci() const
{
	return serieCI;
}

void Candidat::set_serie_ci(string serie_ci)
{
	serieCI = serie_ci;
}

int Candidat::get_nr_ci() const
{
	return nrCI;
}

void Candidat::set_nr_ci(int nr_ci)
{
	nrCI = nr_ci;
}

double Candidat::get_medie_bac() const
{
	return medieBAC;
}

void Candidat::set_medie_bac(double medie_bac)
{
	medieBAC = medie_bac;
}

int Candidat::get_categ() const
{
	return categ;
}

void Candidat::set_categ(int categ)
{
	this->categ = categ;
}

int Candidat::get_tip() const
{
	return tip;
}

void Candidat::set_tip(int tip)
{
	this->tip = tip;
}

int Candidat::get_nr_inreg() const
{
	return NrInreg;
}

void Candidat::set_nr_inreg(int nr_inreg)
{
	NrInreg = nr_inreg;
}

string Candidat::get_cod() const
{
	return cod;
}

void Candidat::set_cod(string cod)
{
	this->cod = cod;
}

double Candidat::get_nota_proba() const
{
	return notaProba;
}

void Candidat::set_nota_proba(double nota_proba)
{
	notaProba = nota_proba;
}

double Candidat::get_media() const
{
	return media;
}

void Candidat::set_media(double media)
{
	this->media = media;
}

Data Candidat::get_dat() const
{
	return dat;
}

void Candidat::set_dat(Data dat)
{
	this->dat = dat;
}

Candidat::Candidat(): nume(""), serieCI(""), nrCI(0), medieBAC(0), categ(1), NrInreg(++nrING), cod(""), notaProba(0),
                      media(0)
{
}

Candidat::Candidat(string n, string s, int nrC, double Bac, int t, int cat, double notaAd): nume(n), serieCI(s),
                                                                                            nrCI(nrC), medieBAC(Bac),
                                                                                            tip(t), categ(cat),
                                                                                            NrInreg(++nrING),
                                                                                            notaProba(notaAd)
{
	if (tip == 0 && categ == 1)
		cod = NrInreg;
	if (tip == 0 && categ == 2)
	{
		cod = "IF2_";
		cod += NrInreg;
	}
	if (tip == 1 && categ == 1)
	{
		cod = "ID_";
		cod += NrInreg;
	}
	if (tip == 1 && categ == 2)
	{
		cod = "ID2_";
		cod += NrInreg;
	}
}

void Candidat::citire()
{
	while (1) {
		try {
			cout << "\nnume aplicant: ";
			cin >> this->nume;
			if(nume.size()<3)
			{
				throw invalid_argument("Cel putin 3 litere in nume!");
			}
			break;
		}
		catch(invalid_argument&a)
		{
			cout << a.what();
		}
	}

	while (1) {
		try {

			cout << "\nci:";
			cin >> this->serieCI;
			if(this->serieCI.size()!=13)
			{
				throw invalid_argument("CNP ul are 13 cifre");
			}
			
			string sex = this->serieCI.substr(1, 1);
			string an_nastere= this->serieCI.substr(2, 3);
			string luna_nastere = this->serieCI.substr(2, 3);
			string zi_nastere = this->serieCI.substr(4, 5);
			stringstream a(sex);
			int sex1 = 0;
			a >> sex1;
			if((sex1 !=0)&&(sex1 !=1))
			{
				throw invalid_argument("Reintroduceti cnp-ul");
			}
			stringstream b(an_nastere);
			int an;
			b >> an;
			if((an<2000)&&(an>2005))
			{
				{
					throw invalid_argument("Reintroduceti cnp-ul");
				}
			}
			stringstream c(zi_nastere);
			int zi;
			c >> zi;
			if((zi<0)||(zi>30) )
			{
				throw invalid_argument("Reintroduceti cnp-ul");
			}
			stringstream d(luna_nastere);
			int luna;
			d >> luna;
			if((luna<0)||(luna>12))
			{
				throw invalid_argument("Reintroduceti cnp-ul");
			}
			
			break;
		}
		catch(invalid_argument&a)
		{
			cout << a.what();
		}
		catch(...)
		{
			cout << "A aparut o eroare.Reintroduceti";
		}
	}


	while (1) {
		try {
			
			cout << "\nmedie bac: ";
			cin >> this->medieBAC;
			if (cin.fail())
				//dupa ce cin-ul da fail,trebuie neaparat dat clear
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				//dau throw erorii aparute
				throw invalid_argument("Valoarea introduse nu este un numar INTREG.\n");
			}
			if((medieBAC<0)||(medieBAC>10))
			{
				throw invalid_argument("imposibil.reintrodu");
			}
			break;
		}
		catch(invalid_argument& a)
		{
			cout << a.what();
		}
	}
	int luna;
	int an;
	int zi;
	while (1) {
		try
		{

			cout << "\nZi ";
			cin >> zi;
			if (cin.fail())
				//dupa ce cin-ul da fail,trebuie neaparat dat clear
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				//dau throw erorii aparute
				throw invalid_argument("Valoarea introduse nu este un numar INTREG.\n");
			}
			if((zi<0)||(zi>31))
			{
				throw invalid_argument("Zi incorecta");
			}
			break;
		}
		catch(invalid_argument& a)
		{
			cerr << a.what();
		}
		catch(...)
		{
			cout << "A aparut o eroare in sistem" << endl;
		}
	}



	while (1) {
		try
		{

			cout << "\nLuna ";
			cin >> luna;
			if (cin.fail())
				//dupa ce cin-ul da fail,trebuie neaparat dat clear
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				//dau throw erorii aparute
				throw invalid_argument("Valoarea introduse nu este un numar INTREG.\n");
			}
			if ((luna < 0) || (luna > 12))
			{
				throw invalid_argument("Luna incorecta");
			}
			break;
		}
		catch (invalid_argument & a)
		{
			cerr << a.what();
		}
		catch (...)
		{
			cout << "A aparut o eroare in sistem" << endl;
		}
	}




	while (1) {
		try
		{

			cout << "\nAn: ";
			cin >> an;
			if (cin.fail())
				//dupa ce cin-ul da fail,trebuie neaparat dat clear
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				//dau throw erorii aparute
				throw invalid_argument("Valoarea introduse nu este un numar INTREG.\n");
			}
			if ((an < 2000) || (an>2020))
			{
				throw invalid_argument("An incorect");
			}
			break;
		}
		catch (invalid_argument & a)
		{
			cerr << a.what();
		}
		catch (...)
		{
			cout << "A aparut o eroare in sistem" << endl;
		}
	}

	
	

	Data* a = new Data(zi, luna, an);
	this->dat = *a;
	cout << "\n0 pt prima facultate,1 pt a 2a:";
	cin >> this->categ;
	cout << "\n0 pt ID ,1 pt IF " << endl;
	cin >> this->tip;

	if ((typeid(*this) == typeid(Candidat_IF)) ||
		(typeid(*this) == typeid(Candidat_ID)))
	{
		cout << "\nnota proba 1: ";
		float x1;
		cin >> x1;
		cout << "\nnota proba 2: ";
		float x2;
		cin >> x2;
		this->notaProba = (x1 + x2) / 2;
	}
	if ((typeid(*this) == typeid(Candidat_IF2)) ||
		(typeid(*this) == typeid(Candidat_ID2)))
	{
		cout << "In urma interviului,nota este: ";
		cin >> this->notaProba;
	}
}
	
void Candidat::afisare()
{
	cout << "\nnume aplicant: ";
	cout << this->nume;
	cout << "\nci:";
	cout << this->serieCI;
	cout << "\nmedie bac: ";
	cout << this->medieBAC;
	cout << "\ndata " << this->dat.get_f() << "/"<< this->dat.get_s() <<"/" << this->dat.get_t();
	cout << "\ncod: " << this->cod;
	cout << "\nNr inregistrare " <<this->NrInreg<< endl;
}
int Candidat::nrING = 0;

/*
 *     string nume;
    string serieCI;
    int nrCI;
    double medieBAC;
    int categ; // prima sau a doua fac
    int tip; // IF sau ID
    int NrInreg;
    string cod;
    double notaProba;
    double media;
    Data dat;

 */
bool operator<(const Candidat& a, const Candidat& b)
{
	return(a.get_medie_bac() < b.get_medie_bac() ? true : false);

}

std::ostream& operator<<(std::ostream& o, Candidat*& i)
{
	i->afisare();
	return o;
}

std::istream& operator>>(std::istream& o, Candidat*& i)
{

	i->citire();
	return o;
}

bool operator+(Candidat& i, int nr)
{
	i.set_nr_inreg(i.get_nr_inreg() + 1);
	return true;
}

bool operator-(Candidat& i, int nr)
{
	i.set_nr_inreg(i.get_nr_inreg() - 1);
	return true;
}

bool operator==(const Candidat& a, const Candidat& b)
{
	return(a.get_media() == b.get_media() ? true : false);
}

bool operator!=(const Candidat& a, const Candidat& b)
{
	return(a.get_media() != b.get_media() ? true : false);
}
