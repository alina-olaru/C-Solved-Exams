#pragma once
#include <string>
static int ID = 1;






template <typename T1, typename T2, typename T3>
class triplet {

private:
    T1 a;
    T2 b;
    T3 c;

public:


    triplet(T1 a, T2 b, T3 c)
        : a(a),
        b(b),
        c(c)
    {
    }

    triplet() = default;

    inline T1 get_first() const {
        return a;
    }
    inline T2 get_second() const {
        return b;
    }
    inline T3 get_third() const {
        return c;
    }

};

typedef triplet<int, int, int> Data;




class Zbor
{
private:
	int id_zbor;
//	std::string oras;
//	int zi_plecare;
    Data data_inregistrare;
    float pret;
    float reducere;
public:

	float get_pret() const;
	void set_pret(float pret);
	float get_reducere() const;
	void set_reducere(float reducere);
    Zbor();
	int get_id_zbor() const;

	void set_id_zbor(int id_zbor);

	Data get_data_inregistrare() const;

	void set_data_inregistrare(Data data_inregistrare);

	Zbor(int id_zbor, Data data_inregistrare)
		: id_zbor(id_zbor),
		  data_inregistrare(data_inregistrare)
	{
	}

    virtual void citire();
   virtual void afisare();
};

