
#include "Lista.h"
#include"Persoana.h"
#include"Dictionar.h"
#include "Pair.h"
#include"Coada.h"

int main()
{
	Map<string, Persoana>* map = new Map<string, Persoana>();

	Persoana *p1=new Persoana ("Ana", 20);
	Persoana *p2=new Persoana("Andrei", 30);
	Persoana *p3=new Persoana("Cosmin", 40);

	map->insert("Ana", *p1);
	map->insert("Andrei", *p2);
	map->insert("Cosmin", *p3);


	//cout << *map << endl;
	Map<string, Persoana>* map2 = new Map<string, Persoana>();
	Persoana* p4 = new Persoana("Sebastian", 19);
	Persoana* p5 = new Persoana("Cristi", 40);

	map2->insert("Sebastian", *p4);
	map2->insert("Cristi", *p5);

	*map + *map2;
	cout << map->get("Ana") << endl;
	cout << map->get("Andrei") << endl;
	cout << map->get("Cosmin") << endl;
	cout << map->get("Sebastian") << endl;
	cout << map->get("Cristi") << endl;

	cout << endl;

	

}


