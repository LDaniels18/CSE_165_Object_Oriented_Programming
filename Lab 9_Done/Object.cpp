#include <iostream>
#include "Object.h"

using namespace std;

int main() {
    
    Object *n = new Number(4); //an object pointer n of class Object which equals a new instance of class Number(4)
    Object *coord = new Coord3D(1, 2, 3); //and object pointer of class Coord = a new instance of Coord3D 


    //more object pointers instances of class members pointing to functions:

    Object *res1 = coord->multiply(n);
    Object *res2 = n->multiply(coord);
    Object *res3 = coord->multiply(coord);
    Object *res4 = n->multiply(n);

    //object pointers gathering the value of being pointed to print:
    
    res1->print();
    res2->print();
    res3->print();
    res4->print();

} //end of main