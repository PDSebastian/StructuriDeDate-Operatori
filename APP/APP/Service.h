#pragma once
#include "Photos.h"
#include "Lista.h"
#include "Map.h"
class Service
{
private: 
	Map<User, Lista<Photos>> data;
public:
	Service() {};
	~Service() {};
	bool  addUser(User user) {
		if (data.find(user).getHead() != NULL) {
			return false;
		}
		else {
			Lista<Photos> *lista = new Lista<Photos>();
			data.insert(user, *lista);
			return true;
		}
	}
	void addPhotos(User u ,Photos p) {
		Lista<Photos> l = data.get(u);
		l.addEnd(p);
		data.insert(u, l);
	}
	void afisarePozeUser(User u) {
		Lista<Photos>l = data.get(u);
		Node<Photos>* aux = l.getHead();
		cout << "Poze user " << u.getUsername() << endl;
		while (aux) {
			cout << aux->getData() << endl;
			aux = aux->getNext();
		}
	
	
	}








};

