#include "Home.h"

Home::Home():Comanda()
{
	
}

Home::Home(int a, int b, int c)
{
	this->set_ecran(a);
	this->set_video(b);
	this->set_tabla(c);
}


void Home::Home_opreste(int a)
{
	switch(a)
	{
	case 1:
		{
		this->set_ecran(0);
		break;
		}
	case 2:
		{
		this->set_video(0);
		break;
		}
	case 3:
		{
		this->set_tabla(0);
		break;
		}
	}
}

string Home::Home_verificare()
{
	if(((this->get_video()==1)&&
		(this->get_ecran()==0)&&
		(this->get_tabla()==0))||
		((this->get_video()==0)&&
			(this->get_ecran()==1)&&
			(this->get_tabla()==1))||
			((this->get_video()==0)&&(this->get_ecran()==0)
				&&(this->get_ecran()==0)))
	{
		//cout << "Ok";
		return "ok";
	}
	return "\nNu am inteles cerinta\n";
}
