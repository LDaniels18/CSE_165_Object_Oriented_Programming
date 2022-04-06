#include <iostream>
#include "Dog.h"

using namespace std;

int main(int argc, const char * argv[])
{
	Dog myDog = Dog("Bruno", 4); //calling the dog function

	cout << myDog.getName() << " is " << myDog.getAge()<<" years old."<< endl; //get refers to the animal header within the Dog header... where we return both the name and age...
	myDog.feed(); //feeding the dog sould print out a message 

	//Animal myAnimal;
    //Animal anotherAnimal;
  
    //print total number of animals
   // cout << Animal::count << endl;

   

	return 0;
}