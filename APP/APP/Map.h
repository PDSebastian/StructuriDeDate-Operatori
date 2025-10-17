#pragma once
#include "Pair.h"
#include<functional>
#include"Lista.h"
template <typename K, typename V>
class Map {
	Lista<Pair<K, V>>** lista;
	size_t size = 5;
public:
	Map(size_t size = 5) : size(size) {
		lista = new Lista<Pair<K, V>>* [size];
		for (int i = 0; i < size; i++) {
			lista[i] = new Lista<Pair<K, V>>();
		}
	}
	size_t  hashKey(const K& key) {
		return std::hash<K>{}(key) % size;
	}
	void insert(K key, V val) {
		int i = hashKey(key);
		lista[i]->addEnd(Pair<K, V>(key, val));

	}

	
	V get(const K& key) {
		Lista<Pair<K, V>>* li = lista[hashKey(key)];

		Node<Pair<K, V>>* aux = li->getHead();
		while (aux) {
			if (aux->getData().getKey() == key) {
				return aux->getData().getValue();
			}

			aux = aux->getNext();
		}
		return V();

	}
	V find(K key) {
		int i = hashKey(key);
		Node<Pair<K, V >>* aux = lista[i]->getHead();
		while (aux) {
			if (aux->getData().getKey() == key) {
				return aux->getData().getValue();
			}
			aux = aux->getNext();

		}
		return V();

	}
	Lista<K> getKeys() {
		Lista<K>keys;
		for (int i = 0; i < size; i++) {
			Node<Pair<K, V>>* aux = lista[i]->getHead();
			while (aux) {
				keys.addEnd(aux->getData().getKey());
				aux = aux->getNext();

			}

		}
		return keys;

	}
	Lista<V>getValue() {
		Lista<V>value;
		for (int i = 0; i < size; i++) {
			Node<Pair<K, V>>* aux = lista[i]->getHead();
			while (aux) {
				value.addEnd(aux->getData().getValue());
				aux = aux->getNext();

			}


		}
		return value;



	}
	Lista<Pair<K, V>>getPairs() {
		Lista<Pair<K, V>>pairs;
		for (int i = 0; i < size; i++) {
			Node<Pair<K, V>>* aux = lista[i]->getHead();
			while (aux) {
				pairs.addEnd(aux->getData());
				aux = aux->getNext();



			}


		}
		return pairs;
	}
	bool empty() {
		for (int i = 0; i < size; i++) {
			if (lista[i]->getHead() != NULL) {
				return false;
			}

		}
		return true;

	}
	int sterge(K key) {
		Lista<Pair<K, V>>* l = lista[hashKey(key)];
		Node<Pair<K, V>>* aux = l->getHead();
		int i = 0;
		while (aux) {
			if (aux->getData().getKey() == key) {
				l->deleteNode(i);
				return 1;
			}
			aux = aux->getNext();
			i++;


		}
		return 0;

	}
	friend ostream& operator<<(ostream& os, const Map<K, V>& m) {

		for (int i = 0; i < m.size; i++) {
			Node<Pair<K, V>>* aux = m.lista[i]->getHead();
			while (aux) {

				os << aux->getData().getKey() << "; " << aux->getData().getValue();
				aux = aux->getNext();
			}
		}

		return os;
	}
	Map<K, V>& operator+(const Map<K, V>& map) {
		for (int i = 0; i < map.size; i++) {
			Node<Pair<K, V>>* aux = map.lista[i]->getHead();
			while (aux) {
				insert(aux->getData().getKey(), aux->getData().getValue());
				aux = aux->getNext();
			}
		}
		return *this;

	}
	Map<K, V>& operator-(const Map<K, V>& map) {
		for (int i = 0; i < map.size; i++) {
			Node<Pair<K, V>>* aux = map.lista[i]->getHead();
			while (aux) {
				sterge(aux->getData().getKey());
				aux = aux->getNext();
			}
		}
		return *this;
	}
};