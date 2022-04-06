#include <iostream>
#include "Cat.h" //refering to Cat.h
#include "Dog.h" //Refering to Dog.h

int main(int argc, const char * argv[])
{
	Animal * someAnimal; //class Animal with a new pointer object

	someAnimal = new Dog(); //calling function Dog and assigning to the pointer object 

	someAnimal->talk(); //now this accesses a member function or member variable 
	//https://stackoverflow.com/questions/4113365/what-does-mean-in-c

	delete someAnimal; //deleting data from Animal

	someAnimal = new Cat(); //calling function Cat

	someAnimal->talk();

	delete someAnimal;

	return 0;
}