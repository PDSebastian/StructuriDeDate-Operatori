
#include "Lista.h"
#include"Persoana.h"


int main()
{
	Lista<Persoana> lis;

	Persoana persoana("test", 12);
	lis = lis + persoana;
	
	cout << lis;




}


