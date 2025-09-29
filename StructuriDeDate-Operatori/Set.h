#pragma once
#include "Node.h"
template <typename T>
class Set
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
};

