#pragma once
#include "Referinta.h"
#include<string>
#include <vector>
#include <iostream>
using namespace std;


template <typename T1, typename T2, typename T3>
class triplet {

private:
    T1 a;
    T2 b;
    T3 c;

public:


    triplet() = default;

   inline triplet(T1 a, T2 b, T3 c)
	    : a(a),
	      b(b),
	      c(c)
    {
    }

    inline T1 get_f() const {
        return a;
    }
    inline T2 get_s() const {
        return b;
    }
    inline T3 get_t() const {
        return c;
    }

};

typedef triplet<int, int, int> Data;


class PaginiWEB:public Referinta
{
private:
	string nume_proprietar;
	string titlu_pagina;
	string url_pagina;
    Data data_accesare;
public:

	PaginiWEB();
	PaginiWEB(string nume_proprietar, string titlu_pagina, string url_pagina, Data data_accesare)
		: nume_proprietar(nume_proprietar),
		  titlu_pagina(titlu_pagina),
		  url_pagina(url_pagina),
		  data_accesare(data_accesare)
	{
	}

	string get_nume_proprietar() const;
	void set_nume_proprietar(string nume_proprietar);
	string get_titlu_pagina() const;
	void set_titlu_pagina(string titlu_pagina);
	string get_url_pagina() const;
	void set_url_pagina(string url_pagina);
	Data get_data_accesare() const;
	void set_data_accesare(Data data_accesare);
	void citire() override;
	void afisare() override;
};

