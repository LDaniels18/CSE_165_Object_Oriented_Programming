#pragma once
#include "Animal.h"

class Dog : public Animal { //Dog inherits Animal 


public:

	Dog() : Animal() {

	}

	Dog(string n, int a) : Animal(n, a) {

	}

	void talk() { //a dervied function 
		cout << "Woof, woof!" << endl;
	}
};

