#pragma once
#include <iostream>

using namespace std;

class Animal { //base class (parent class)
	string name;
	int age;

public:

	Animal() {
		name = "Generic Name";
		age = 0;
	}

	Animal(string n, int a) {
		name = n;
		age = a;
	}

	//When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function
	//since we dont explicitly define the function in Animal, and Animal is a derived class in both cat and dog we need
	//to still create an instance of the function being used when Cat and Dog are being used. 
	//Parent class needs to have derived functions when being inherited...

	//https://www.geeksforgeeks.org/virtual-function-cpp/ --for virtural
	//https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/ --pure virtural functions

	virtual void talk(){

	}
};
