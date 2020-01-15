#include "Comanda.h"

Comanda::Comanda()
{
	this->ecran = 0;
	this->tabla = 0;
	this->video = 0;
}

int Comanda::get_ecran() const
{
	return ecran;
}

void Comanda::set_ecran(int ecran)
{
	this->ecran = ecran;
}

int Comanda::get_video() const
{
	return video;
}

void Comanda::set_video(int video)
{
	this->video = video;
}

int Comanda::get_tabla() const
{
	return tabla;
}

void Comanda::set_tabla(int tabla)
{
	this->tabla = tabla;
}
