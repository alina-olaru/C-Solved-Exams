#pragma once
#include <string>
#include "Proprietate.h"
#include <vector>


template <typename T1, typename T2, typename T3>
class triplet {

private:
    T1 a;
    T2 b;
    T3 c;

public:

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


class Contract
{
    std::string nume_client;
    Data data_inceput;
    Data data_final;
    int tip_contract;
    int suma_totala;
    int suma_lunara;
    int tip_proprietate;
    std::vector<Proprietate*> p;
public:
    double calc_pret();
    void citire();
    void afisare();
    void afisare_cerinta();

    std::string get_nume_client() const;
    void set_nume_client(std::string nume_client);
    Data get_data_inceput() const;
    void set_data_inceput(Data data_inceput);
    Data get_data_final() const;
    void set_data_final(Data data_final);
    int get_tip_contract() const;
    void set_tip_contract(int tip_contract);
    int get_suma_totala() const;
    void set_suma_totala(int suma_totala);
    int get_suma_lunara() const;
    void set_suma_lunara(int suma_lunara);
    int get_tip_proprietate() const;
    void set_tip_proprietate(int tip_proprietate);
    std::vector<Proprietate*> get_p() const;
    void set_p(std::vector<Proprietate*> proprietates);
};

