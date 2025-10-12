
#include "Lista.h"
#include"Persoana.h"
#include"Dictionar.h"
#include "Pair.h"
#include"Coada.h"

int main()
{
	Map<string, Persoana>* map = new Map<string, Persoana>();

	/*Persoana *p1=new Persoana ("Ana", 20);
	Persoana *p2=new Persoana("Andrei", 30);
	Persoana *p3=new Persoana("Cosmin", 40);

	map->insert("Ana", *p1);
	map->insert("Andrei", *p2);
	map->insert("Cosmin", *p3);


	cout << map->get("Ana") << endl;
	cout << map->get("Andrei") << endl;
	cout << map->get("Cosmin") << endl;
	
	if (map->find("Cosmin") == *p3) {
		cout << "Pers gasita" << endl;
	}
	cout << endl;
	cout << "Keys: " << map->getKeys() << endl;
	cout << "Values: " << map->getValue() << endl;
	cout << "Pairs: " << map->getPairs() << endl;*/

	cout << map->empty() << endl;
}


