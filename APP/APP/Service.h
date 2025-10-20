#pragma once
#include "Photos.h"
#include "Lista.h"
#include "Map.h"
#include"Comments.h"
#include"Like.h"
#include"Follows.h"
template<typename T>
class Service
{
private: 
	Map<User, Lista<T>> data;
public:
	Service() {};
	~Service() {};
	bool  addUser(User user) {
		if (data.find(user).getHead() != NULL) {
			return false;
		}
		else {
			Lista<T> *lista = new Lista<T>();
			data.insert(user, *lista);
			return true;
		}
	}
	void add(const User& u , const T& p) {
		Lista<T> lista = data.get(u);
		lista.addEnd(p);
		data.insert(u, lista);
	}

	void userContent( User u)  {
		cout<<data.get(u);

	
	}
	


};

