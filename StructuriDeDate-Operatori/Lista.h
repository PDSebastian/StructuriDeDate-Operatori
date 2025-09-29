#pragma 
#include "Node.h"
template<typename T>
class Lista
{
	Node<T>* head;
public:
	Lista() {
		this->head = NULL;
	}
	Lista<T>& operator+(T val) {
		Node<T>* node = new Node<T>(val,NULL);
		if (!head) {
			head = node;
		}
		else {
			Node<T>* aux = head;
			while (aux->getNext()) {
				aux = aux->getNext();
			
			
			}
			aux->setNext(node);
		}
		return *this;
	
	}
	Lista<T>& operator-(T val) {
		if (!head) {
			return *this;
		}
		if (head->getData() == val) {
			Node<T>* aux = head;
			aux = aux->getNext();
			delete aux;
			return *this;

		}
		Node<T>* aux = head;
		while (aux->getNext() != NULL && aux->getNext()->getData()!=val) {
			aux = aux->getNext();

		}
		if (aux->getNext() != NULL) {
			Node<T>* node = aux->getNext();
			aux->setNext(node->getNext());
			delete node;
		}
		return *this;

	}
	T operator[](int poz) {
		Node<T>* aux = head;
		int i = 0;
		while (aux != NULL && i < poz) {
			aux = aux->getNext();
			i++;
		
		}
		return aux->getData();




	}
	friend ostream& operator<< (ostream& os, const Lista<T>& lista) {
		Node<T>* aux = lista.head;
		while (aux) {
			os << aux->getData() << " ";
			aux = aux->getNext();
		
		
		}
		return os;
	
	}




};

