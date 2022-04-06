//creating our rect header file:

/*
Design a 2D rectangle class called Rect. 
Class Rect will need 4 floats to represent a rectangle and you will represent it by 
storing the upper-left corner position and then the width and
the height of the rectangle. 
Your Rect class will at least have a constructor receiving the four floats defining the rectangle 
and a method called contains for classifying if a given Vec is inside or outside of the rectangle. 
The coordinate system is the usual 2D XY Euclidean plane. 
Your Rect class should allow the rectangles.cpp file to run without generating any error messages. 
You may use the file Vec.h from the previous exercise
*/

#pragma once


#include <vector> 
#include "Vec.h"
#include <iostream>

using namespace std;

class Rect{ //as stated in the Rect.cpp file 

private: //only to be used in this class

//upper left corner position has a x and y
float x = 0.0f;
float y = 0.0f;

//height and width
float width = 0.0f;
float height = 0.0f;

public: //can be used anywhere

//must use the Rect function as in the main file :

Rect(float left, float right, float Width, float Height){
    //our getter function:

    x = left;
    y = right;
    width = Width;
    height = Height;
} //end of the getter function

//contains is a bool method according to the main.cpp file:

    bool contains(Vec vectorCoords){ //constructor that decides if Vec is inside or outside the rectangle
      if(vectorCoords.x >= x && vectorCoords.x <= (x + width) && vectorCoords.y <= y && vectorCoords.x <= (y + height)){
        return 1;

      }//end of the if 

      else{

        return 0; //end the loop prevents the errors!

      } //end of the else

    }//end of the contains method 


}; //end of our class