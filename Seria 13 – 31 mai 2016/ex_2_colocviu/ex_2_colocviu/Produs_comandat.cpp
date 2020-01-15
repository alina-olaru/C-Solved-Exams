#include "Produs_comandat.h"

int Produs_comandat::get_nr_portii_comandate_per_produs() const
{
	return nr_portii_comandate_per_produs;
}

void Produs_comandat::set_nr_portii_comandate_per_produs(int nr_portii_comandate_per_produs)
{
	this->nr_portii_comandate_per_produs = nr_portii_comandate_per_produs;
}
