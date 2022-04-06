
#pragma once //to create our header
#include <iostream>
#include "Functions.h" //including the Functions Headerfile

using namespace std;


namespace MyLib{ //extending the namespace to another h file 
    void someFunction(){ //we arent returing any data type so its of type void....
        cout<< "someFunction" << endl;
    } //end of the function
}

/*
Use the files Functions.h and namespaces.cpp. 
There is a namespace called MyLib defined in Functions.h. 
Extend that namespace in a file called MoreFunctions.h so that the code compiles and runs without errors and 
matches the expected output. 
Submit your MoreFunctions.h file.
*/

/*
Sources:
For learning about namespaces:
1. https://www.geeksforgeeks.org/namespace-c-set-3-creating-header-nesting-aliasing-accessing/
2. https://stackoverflow.com/questions/35746867/how-to-extend-an-assigned-namespace
3. https://medium.com/swlh/all-about-namespaces-fa9a597ed0d4 -- a pretty neat summary about namespaces..
*/