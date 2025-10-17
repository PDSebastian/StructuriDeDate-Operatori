#pragma once

#include <iostream>
using namespace std;
template<typename K, typename V>
class Pair
{

	K key;
	V value;
public:
	Pair() = default;
	Pair(const K& key, const V& value){
		this->key = key;
		this->value = value;

	}
	K getKey() {
		return key;
	}

	V getValue() {
		return value;
	}
	void setValue(V val) {
		value = val;
	}
	friend ostream& operator<<(ostream& os, const Pair<K, V>& p) {
		os << p.key << " ";
		os << p.value << " ";
		return os;
	}
};