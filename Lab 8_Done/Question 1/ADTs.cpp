#include <iostream>
#include "Derived.h"

using namespace std;

int main(int argc, const char * argv[])
{
    
    ADT * someVar = new Derived; //a pointer object of ADT eqauls a new instance of class Derived
    
    someVar->doSomething(); //object some var is pointing to a member function of class Derived
    
    someVar->doSomethingElse(); //object some var is pointing to a member function of class Derived
    
    return 0;
}