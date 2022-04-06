#pragma once
#include "Animal.h"

class Cat : public Animal { //base class in Cat.h.... Animal is a derived Class
public:

	Cat() : Animal() { //a derived function??

	}
	Cat(string n, int a) : Animal(n, a) {

	}

	void talk() { //a dervived function 
		cout << "Meow, meow!" << endl;
	}
};
