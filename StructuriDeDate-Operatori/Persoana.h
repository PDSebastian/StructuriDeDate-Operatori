#pragma once
#include <iostream>
using namespace std;
class Persoana
{
	string nume;
	int varsta;
public:
	Persoana(string nume, int varsta ) {
		this->nume = nume;
		this->varsta = varsta;
	}
	Persoana() {};
	~Persoana() {};
	
	string getNume() const {
		return nume;
	}
	int getVarsta() const {
		return varsta;
	}
	friend ostream& operator<<(ostream& os, const Persoana& p) {
		os << p.nume << endl;
		os << p.varsta << endl;
	
		return os;
	}

};

