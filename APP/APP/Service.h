#pragma once
#include "Photos.h"
#include "Lista.h"
#include "Map.h"
#include"Comments.h"
#include"Like.h"
#include"Follows.h"
#include "Pair.h"
template<typename T>
class Service
{
private: 
	Map<User, Lista<T>> data;
public:
	Service() {};
	~Service() {};
	bool  addUser(User user) {
		if (data.find(user).getHead() != NULL) {
			return false;
		}
		else {
			Lista<T> *lista = new Lista<T>();
			data.insert(user, *lista);
			return true;
		}
	}
	void add(const User& u , const T& p) {
		Lista<T> lista = data.get(u);
		lista.addEnd(p);
		data.insert(u, lista);
	}

	void userContent( User u)  {
		cout<<data.get(u);

	
	}
	void showPhotos(User u) {
		Lista<T>l = data.get(u);
		Node<T>* aux = l.getHead();
		if (aux == NULL) {
			cout << "User" << u.getUsername() << " nu are poze " << endl;
		}
		while (aux != NULL) {
			cout << aux->getData() << endl;
			aux = aux->getNext();
		}


	}
	void findUSerID(User u, int id) {
		Lista<T>l = data.get(u);
		Node<T>* aux = l.getHead();
		while (aux != NULL) {
			if (u.getID() == id) {
				cout << "user gasit " << endl;
				
			}
			else {
				cout << "user nu a fost gasit " << endl;
			}
			aux = aux->getNext();
		
		}
	
	
	
	
	}
	void deleteUserID(User u, int id) {
		Lista<T>l = data.get(u);
		Node<T>*aux = l.getHead();
		int poz = 0;
		
		while (aux) {
			if (aux->getData().getID() == id) {
				l.deleteNode(poz);

			
			
			}
			aux = aux->getNext();
			poz++;
		
		
		
		
		}
		
	
	
	
	}
	void showComments(User u)  {
		Node<Pair<User, Lista<T>>>* aux = data.getHead();
		Lista<T>l = data.get(u);
		Node<T>* node = l.getHead();
		while (aux) {
			cout << aux->getData() << endl;
			node = node->getNext();
		
		
		
		}
		aux = aux->getNext();
		 
	
	
	}

};

