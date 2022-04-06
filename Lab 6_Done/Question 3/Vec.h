//      Vec cpp lab file 

/*
Design a 2D vector class calledVec. 
Class Vec will contain two float data members x and y, a default constructor, a constructor from two coordinates, 
an add method, and a static member Vec object called null to represent the (0,0) null vector. 
Your Vec class should allow thevectors.cppfileto run without generating any error messages.
*/

#pragma once //so you dont have to use the intial header statements

#include <iostream>
//#include <float>
//#include <vector> //for our vectors 

using namespace std;

class Vec
{

private:

//no need 

public:

float x;
float y;

////////////////////////////////
//static null
static Vec null; 
//Vec::null(0.0f,0.0f);
//////////////////////////////////

//default constructor 
Vec(){
    //in order to assign a float you need to use 'f'
x = 0.0f;
y = 0.0f;
}

//constuctor of two coordinates
Vec(float X, float Y){
    x = X;
    y = Y;

}

//methods of type void (not returning)

//method for Add
void add(Vec vector){ //we need the vector at vectors.cpp 

    x = x + vector.x;
    y = y + vector.y;
}

void print(){

    cout << x << y << endl;
}

}; //end of class declaration
