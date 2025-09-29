#pragma once
#include"Node.h"
template<typename T>
class Coada
{
	Node<T>* head;
public:
	Coada() {
		this->head = NULL;
	}
	Coada<T>& operator+(T val) {
		Node<T>* node = new Node<T>(val,NULL);
		if (!head) {
			head = node;
		}
		else {
			Node<T>* aux= head;
			while (aux->getNext()) {
				aux = aux->getNext();
			}
			aux->setNext(node);
		}
		return *this;
	}
	Coada<T>& operator-(int) {
		if (!head) {
			return *this;
		}
		Node<T>* aux = head;
		head = head->getNext();
		delete aux;
		return *this;
	
	}
	friend ostream& operator<<(ostream& os, const Coada<T>coada) {
		Node<T>* aux = coada.head;
		while (aux) {
			os << aux->getData() << " ";
			aux = aux->getNext();
		
		}
		return os;


	}
	
};

