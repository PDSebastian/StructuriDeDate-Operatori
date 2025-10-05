#pragma once
#include<iostream >
using namespace std;
template <typename T>
class Node
{
	Node<T>* next;
	T data;
public:

	Node(T data, Node<T>* next) {
		this->next = next;
		this->data = data;
	}
	void setData(T data) {
		this->data = data;

	}
	void setNext(Node* next) {
		this->next = next;
	}
	T& getData()  {
		return data;
	}
	Node* getNext() {
		return next;
	
	}
	






};

