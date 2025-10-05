#pragma once
#include "Node.h"
#include "Lista.h"
template <typename T>
class Set:public Lista<T>
{
	Node<T>* head;
public:
	Set() {
		this->head = NULL;
	}
	bool contine(T val) const {
		Node<T>* aux = head;
		while (aux) {
			if (aux->getData() == val) {
				return true;
			}
			aux = aux->getNext();
		
		
		}
		return false;
	
	
	}
	Set<T>& operator+(T val) {
		if (contine(val)) {
			return *this;
		}
		Node<T>* node = new Node<T>(val, head);
		head = node;
		return *this;
	
	}
	Set<T>& operator-(T val) {
		if (!head) {
			return *this;
		}
		while (head && head->getData() == val) {
			Node<T>* aux = head;
			head = head->getNext();
			delete aux;
		
		}
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Set<T>set){
	Node<T>*aux = set.head;
	while (aux) {
		os << aux->getData() << " ";
		aux = aux->getNext();
		}
	return os;
	}

	bool existaElem(const T& elem) {
		Node<T>* aux = this->head;
		while (aux) {
			if (aux->getData() == elem) {
				return true;

			}
			aux = aux->getNext();
		}
		return false;
	}
	void pushElem(const T& elem) {
		if (!contine(elem)) {
			this->addEnd(elem);

		}
	}
	void popElem(const T& elem) {
		Node<T>* aux = this->head;
		int i = 0;
		while (aux != NULL) {
			if (aux->getData() == elem) {
				this->deleteNode(i);
				return;
			}
			aux = aux->getNext();
			i++;
		}
	}
	int size()const {
		return Lista<T>::size();
	}
	bool isEmpty()const {
		return Lista<T>::size() == 0;
	}
	
};

