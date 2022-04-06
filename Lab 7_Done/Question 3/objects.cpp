#include <iostream>
#include "Object.h"

using namespace std;

int Object::ObjectCount = 0; //ObjectCount variable of object class

Object f(Object someObject) {// function F of Class object 
	return someObject; //returning an object called someObject
}

int main(int argc, const char * argv[])
{

	Object myObject; //variable myObject of Class myObject 

	Object another = f(myObject); //we implement our copy constructor here to display our new ObjectCount

	cout << another.ObjectCount << endl; //ObjectCount displayed
	return 0;
}