#pragma once
#include "Node.h"

template<typename U>
class Lista
{
	Node<U>* head;
public:
	Lista() {
		this->head = NULL;
	}
	Lista<U>& operator+(U val) {
		Node<U>* node = new Node<U>(val, NULL);
		if (!head) {
			head = node;
		}
		else {
			Node<U>* aux = head;
			while (aux->getNext()) {
				aux = aux->getNext();


			}
			aux->setNext(node);
		}
		return *this;

	}
	Lista<U>& operator-(U val) {
		if (!head) {
			return *this;
		}
		if (head->getData() == val) {
			Node<U>* aux = head;
			aux = aux->getNext();
			delete aux;
			return *this;

		}
		Node<U>* aux = head;
		while (aux->getNext() != NULL && aux->getNext()->getData() != val) {
			aux = aux->getNext();

		}
		if (aux->getNext() != NULL) {
			Node<U>* node = aux->getNext();
			aux->setNext(node->getNext());
			delete node;
		}
		return *this;

	}
	U operator[](int poz) {
		Node<U>* aux = head;
		int i = 0;
		while (aux != NULL && i < poz) {
			aux = aux->getNext();
			i++;

		}
		return aux->getData();
	}
	friend ostream& operator<< (ostream& os, const Lista<U>& lista) {
		Node<U>* aux = lista.head;
		while (aux) {
			os << aux->getData() << " ";
			aux = aux->getNext();
			

		}
		return os;

	}
	
	void addEnd(const U& valNode) {
		Node<U>* node = new Node<U>(valNode, nullptr);
		node->setData(valNode);
		if (!head) {
			head = node;
		}
		else {
			Node<U>* aux = head;
			while (aux->getNext()) {
				aux = aux->getNext();
			}
			aux->setNext(node);
		}
	}
	void addStart(const U& val) {
		Node<U>* aux = new Node<U>(val, nullptr);
		aux->setData(val);
		aux->setNext(head);
		head = aux;
	}
	void deleteNode(int poz) {
		if (!head) return;
		if (poz == 0) {
			Node<U>* aux = head;
			head = head->getNext();
			delete aux;
			return;
		}
		Node<U>* p = head;
		int i = 0;
		while (p != nullptr && i < poz - 1) {
			p = p->getNext();
			i++;
		}
		if (p && p->getNext()) {
			Node<U>* sters = p->getNext();
			p->setNext(sters->getNext());
			delete sters;
		}
	}
	U front() const {
		return head->getData();
	}
	U back() const {
		Node<U>* aux = head;
		while (aux->getNext() != nullptr) {
			aux = aux->getNext();
		}
		return aux->getData();
	}
	void pushFront(const U& val) {
		Node<U>* node = new Node<U>(val, nullptr);
		node->setNext(head);
		head = node;
	}
	void pushBack(const U& val) {
		Node<U>* node = new Node<U>(val, nullptr);
		if (!head) {
			head = node;
			return;
		}
		Node<U>* aux = head;
		while (aux->getNext() != nullptr) {
			aux = aux->getNext();
		}
		aux->setNext(node);
	}
	int size() const {
		int ct = 0;
		Node<U>* aux = head;
		while (aux != nullptr) {
			ct++;
			aux = aux->getNext();
		}
		return ct;
	}
	Node<U>* getHead()const {
		return this->head;
	}

};

