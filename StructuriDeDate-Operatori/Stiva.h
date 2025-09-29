#pragma once
#include "Node.h"
template <typename T>
class Stiva
{
	Node<T>* head;
public:
	Stiva() {
		this->head = NULL;
	}
	Stiva<T>& operator+(T val) {
		Node<T>* node = new Node<T>(val, head);
		head = node;
		return *this;
	
	}
	Stiva<T>& operator-(int) {
		if (!head) {
			return *this;
		}
		Node<T>* aux = head;
		head = head->getNext();
		delete aux;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Stiva<T>& stiva) {
		Node<T>* aux = stiva.head;
		while (aux) {
			os << aux->getData() << " ";
			aux = aux->getNext();
		}
		return os;


	}
	




};

