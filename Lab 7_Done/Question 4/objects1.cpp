#include <iostream>
#include "Object.h"

using namespace std;

int Object::ObjectCount = 0;

Object f(Object &someObject) { //a class object function called f that passes an instance of an obect 
	return someObject;
}

int main(int argc, const char * argv[])
{

	Object  myObject = f(myObject); //an object of class Object -- 1 instance

	//Object  another = f(myObject); //how about we dont include a copy ?? //instance 2

	//Object myObject = f(myObject);

	cout << myObject.ObjectCount << endl; //returning the ObjectCount of the object //instance 3

	/*
	What I DID:

	I essentially took away the copy object (another), and just pased the original object "myObject" back onto itself
	I didnt change the header file..
	*/
	return 0;
}