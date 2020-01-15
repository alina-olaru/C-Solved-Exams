#include "Candidat_IF.h"

double Candidat_IF::calcul_medie()
{
	media = 0.8 * notaProba + 0.2 * medieBAC;
	return media;
}

istream& operator>> (istream& in, Candidat_IF*& obj) {
	obj->citire();
   // in >> obj.nume >> obj.serieCI >> obj.nrCI >>
	//obj.medieBAC >> obj.notaProba;
    return in;
}

ostream& operator<< (ostream& out, Candidat_IF*& obj) {
	
 //   out << obj.nume << " " << obj.serieCI << " "
	//<< obj.nrCI << obj.medieBAC << " " << obj.cod << 
	//"" << obj.media << '\n';
	//dynamic_cast<Candidat*>(obj)->citire();
	obj->afisare();
    return out;
}