#pragma once
#include "Node.h"
#include "Lista.h"
template <typename T>
class Stiva:public Lista<T>
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
	
	void push(const T& elem) {
		this->addStart(elem);
	}
	T top() const {
		return this->back();
	}
	void pop() {
		return this->deleteNode(0);

	}
	int size() const {
		return Lista<T>::size();
	}
	bool isEmpty() const {
		return this->size() == 0;

	}
	



};

