#include "Education.h"
#include <ostream>
#include <iostream>

void Education::Edu_trivia(std::string a)
{
	if ((this->get_tabla() == 0) && (this->get_video() == 1))
	cout << "Cautare " << a << endl;
}

void Education::Edu_lectie(std::string a, int b)
{
	if((this->get_tabla()==0)&&(this->get_video()==1))
	cout << "Download " << a << " -"<<b;
}

Education::Education(int a, int b, int c)
{
	this->set_ecran(a);
	this->set_video(b);
	this->set_tabla(c);
}


