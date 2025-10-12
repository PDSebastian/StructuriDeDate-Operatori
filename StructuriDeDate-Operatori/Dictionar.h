#pragma once
#include "Pair.h"
#include<functional>
#include"Lista.h"
template <typename K,typename V>
class Map {
	Lista<Pair<K, V>>**lista;
	size_t size = 5;
public:
	Map(size_t size = 5) : size(size) {
		lista = new Lista<Pair<K, V>>*[size];
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

	 //todo o lista cu toate cheile
	 //todo o lista cu toate valorile
	 //todo o lista cu toate perechiile
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
	 Lista<Pair<K,V>>getPairs() {
		 Lista<Pair<K,V>>pairs;
		 for (int i = 0; i < size; i++) {
			 Node<Pair<K, V>>*aux = lista[i]->getHead();
			 while (aux) {
				 pairs.addEnd(aux->getData());
				 aux = aux->getNext();
				


			 }
			 

		 }
		 return pairs;
	 }










};