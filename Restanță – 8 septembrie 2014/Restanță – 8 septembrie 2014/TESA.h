#pragma once
#include "Angajat.h"

class TESA:public Angajat
{
private:
	int weekend;
public:

	TESA() = default;
	int get_weekend() const;
	void set_weekend(int weekend);

	TESA(int weekend)
		: weekend(weekend)
	{
	}

	void citire() override;
	void afisare() override;
};

