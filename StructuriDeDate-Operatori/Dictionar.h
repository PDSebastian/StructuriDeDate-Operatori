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
	 V get(const K &key) {
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
	 //todo o lista cu toate cheile
	 //todo o lista cu toate valorile
	 //todo o lista cu toate perechiile
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
	/* void sterge(K key) {
		 int i = hashKey(key);
		 Lista<Pair<K, V>> *lista = lista[i];
		 Node<Pair<K,V>>*aux=Node<Pair<K,V>>*aux
	 }
*/








};