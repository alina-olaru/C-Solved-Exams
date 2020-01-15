
#include <iostream>
#include <vector>
#include "manager_singleton.h"
#include "Candidat_ID2.h"

using namespace std;


int main()
{
   // Candidat_ID2* A = new Candidat_ID2();
   // A->citire();
  //  A->afisare();
  //  A->qsortt;
   //manager_singleton* Manager = manager_singleton::get_instance();
   //Manager->citire();
   //Manager->qsortt();
 //  Manager->afisare_admisi();
    //Candidat_IF* a=new Candidat_IF();
   // cin >> a;
   // cout << a;
    /*Candidat* a=new Candidat_ID();
    cin >> a;
    cout << a;
    a + 2;
    cout << a;
    a - 5;
    cout << a;
  
    Candidat* aa = new Candidat_ID();
    cin >> aa;
    cout << aa;
    (a > aa) ? cout << "da" : cout << "nu";*/

    manager_singleton* Manager = manager_singleton::get_instance();
    Manager->citire();
    Manager->delete_baza_de_date();
    Manager->afisare();
    return 0;
}