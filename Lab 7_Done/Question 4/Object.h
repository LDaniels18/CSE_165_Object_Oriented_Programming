#pragma once

#include <iostream>

class Object{

    public:

    static int ObjectCount;

    //we will need a default constructor
    //https://www.geeksforgeeks.org/c-internals-default-constructors-set-1/
    
    Object(){

        ObjectCount = ObjectCount + 1; //we are incrementing the object called ObjectCount from main..
    }


    /*
    wont be needed since f is declared and defined in main
    //creating our function f 
    void f(int objectCount){

        objectCount++; //increasing the object ObjectCount that was created 

    */ 
    //https://www.geeksforgeeks.org/copy-constructor-in-cpp/
    //implementing our copy constructor -- since we are creating another object called another and copying the number from object called ObjectCount..
    //https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm

    Object(const Object &anObject){

        ObjectCount = anObject.ObjectCount + 1; //where we are copying the ObjectCount gotten from the default constructor and directly accessing it with (.) onto the object copier. 
    }
    

};