
#include "Lista.h"
#include"Persoana.h"
#include"Dictionar.h"
#include "Pair.h"
#include"Coada.h"

int main()
{
	//Map<string, int >* map = new Map<string, int>();
	////map->insert("Jenny", 22);
	////map->insert("Liam", 24);
	//Lista<Pair<string, int>> lista;
	//lista.addStart(Pair<string, int>("Ana", 20));
	//lista.addEnd(Pair<string, int>("Bob", 25));
	//lista.pushFront(Pair<string, int>("Carol", 30));
	//lista.pushBack(Pair<string, int>("David", 22));

	//lista + Pair<string, int>("Carol", 30);
	//cout << lista << endl;
	//cout << "////////////////////////////" << endl;
	Coada<Pair<string, int>>* coada = new Coada<Pair<string, int>>();
	coada->push(Pair<string, int>("Ana", 20));
	coada->push(Pair<string, int>("Bob", 25));
	coada->push(Pair<string, int>("Carol", 30));
	coada->push(Pair<string, int>("David", 22));

	cout << *coada << endl;


}


