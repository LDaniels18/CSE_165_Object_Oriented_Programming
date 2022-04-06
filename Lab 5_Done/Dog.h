//creating our header file:

#pragma once

//get the animal.h file:

#include "Animal.h" //we are including a user defined header file 

//refernces:
//https://www.geeksforgeeks.org/constructors-c/

class Dog : public Animal{ //we are inheriting the properties from constructor class animal()

//extending the animal class:

private:

//we have nothig to make
  
public:
  
//so we can extend the Animal class to produce a Dog class.

 //We only need to change the constructors and destructors of the Dog class to print the appropriate messages

//Constructor 
Dog(){ //creating a non-parameterized Dog() class.. by doing this.. we are also creating class animal

}

//calling a instance of Dog() and actaully creating a "DOG".. we are using the variables of animal

//Since in Animal.cpp we call Dog myDog = Dog("Bruno", 4);... we need to create a class call in order to print the correct term 
Dog(string name, int age){

setName(name); //setting the name for the dog (bruno)
setAge(age); //setting the age for the dog (4)

cout << "Creating Dog" << endl; //printing out that a dog is being created 

}

//###############################################//
//This is Automatic!
//our destructor for the Dog() class
~Dog(){
cout << "Deleting a Dog" << endl;
}

//and we need to change the feed() function to print a message saying "A small bone, please!"
void feed(){
cout << "A small bone, please!!" << endl;
}

//Animal.feed(); since we didnt create a whole new class instance of animal.. we cant directly call the function...we just have to recreate it.

};