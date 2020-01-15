#include "Home.h"
#include "Education.h"

int main()
{
	/*Home h1(0,0,0);
	Home h2(1);
	Home h3(0, 0, 1);
	h2.Home_opreste(3);
	cout << h1.Home_verificare() << endl;
	cout << h2.Home_verificare() << endl;
	cout << h3.Home_verificare() << endl;

	*/
	Home h2(1);
	Home h4(h2), h5 = h2;
	Education e1, e2(1), e3(1, 1, 0), e4(e3);
	e4.Edu_lectie("Algebra", 3); // Se va afisa ”Download – Algebra – Curs 3”
	e2.Edu_trivia("Data Structures"); // Se va afisa ”Cautare Data Structures”
	e2.Edu_lectie("POO", 2);	//



}
