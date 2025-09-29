#pragma once
#include "Lista.h"
#include "Persoana.h"
template<typename A>
class Service
{
public:
	Lista<A>* lista;
	
	Service() {
		lista = new Lista<A>();
	}
	void add(A data) {

		*lista = *lista + data;
	}
	
	void afisare() {
		cout << *lista;
	}




};

