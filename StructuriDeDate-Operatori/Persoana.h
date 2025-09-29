#pragma once
#include<iostream>
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


};

