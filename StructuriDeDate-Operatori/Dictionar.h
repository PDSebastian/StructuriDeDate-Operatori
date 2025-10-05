#pragma once
#include "Pair.h"
#include"Lista.h"
template <typename K,typename V>
class Map {
	Lista<Pair<K, V>>**lista;
	size_t size = 100;
public:
	Map(size_t size = 10) : size(size) {
		lista = new Lista<Pair<K, V>>* [size];
		for (int i = 0; i < size; i++) {
			lista[i] = new Lista<Pair<K, V>>();
		}
	}
	 size_t  hashKey(const K& key) {
		 return hash<K>(key) % size;
	}
	 //void insert(K key, V val) {
		// int i = hashKey(key);
		// lista[i] + Pair<K,V>(key, val);
	 //
	 //}











};