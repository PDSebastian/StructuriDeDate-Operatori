
#include "Lista.h"
#include"Coada.h"
#include"Stiva.h"
#include "Set.h"

int main()
{
	Lista<int> lista;
	lista = lista + 10;
	lista = lista + 20;
	lista = lista + 30;
	lista = lista + 40;
	lista = lista - 20;
	cout << lista << endl;
	cout << lista[2] << endl;
	cout << "////////////////////////" << endl;
	Coada<int >coada;
	coada = coada + 50;
	coada = coada + 60;
	coada = coada + 70;
	coada = coada - 60;
	cout << coada << endl;
	cout << "////////////////////////" << endl;
	Stiva<int> stiva;
	stiva = stiva + 1;
	stiva = stiva + 2;
	stiva = stiva + 3;
	stiva = stiva + 4;
	stiva = stiva - 1;
	cout << stiva << endl;
	cout << "////////////////////////" << endl;
	Set<int>set;
	set = set + 100;
	set = set + 200;
	set = set + 300;
	set = set + 300;
	cout << set << endl;
}


