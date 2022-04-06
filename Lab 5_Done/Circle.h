//creating the cirlce header

//reference:
//https://www.geeksforgeeks.org/constructors-c/

#pragma once //skips the initial header declerations..
#include<iostream>

using namespace std;
// to create two constructors

// one that creates a unit Circle w no parameters.. creating class circle.

    class Circle {

        //we need 3 private variables 

    private:
    // three private variables, namely x, y, and r, all of type double

    double x;
    double y;
    double r;

    public:
    //You should also add a public variable, area, which will store the area of the circle
    
    //store the area of the circle 
    double area;

    //There should be two constructors, one that takes no arguments and instantiates a unit circle centered at the origin

    //creating our unit circle .. Non parametirzed (no arguments):

    Circle(){ //TO ACTUALLT GET THE CIRCLE 

        //about the origin
        x = 0.0;
        y = 0.0;
        r = 1.0;

        //get the area from the circle with given parameters:

        area = ((3.14) * r * r); //to actually get the area
    }

    //The second constructor should take in three arguments, namely x, y and r, and instantiate a circle of radius r, centered at (x, y).

    //creating a parameterized constructor:

    Circle(double xCoord, double yCoord, double rCoord){ //given coordinates through a function call 

        //we need to be able to create the circle by taking in the parameters
        //TO GET THE PARAMETERS WE NEED FOR THE CIRCLE
        x = xCoord;
        y = yCoord;
        r = rCoord;

        area = ((3.14) * r * r); //to actually get the area

    }

    //There should be getters and setters for all the private variables.

    //getters:  gets the coord

    double getX(){
        return x;

    }

    double getY(){
        return y;
        
    }

    double getR(){
        return r;
        
    }


    //setters: sets the coord into the class constructor Circle()

    double setX(double xCoord){ //because we are setting the XCoord from the parameterized constructor
        x = xCoord;
    }

     double setY(double yCoord){ //because we are setting the YCoord from the parameterized constructor
        y = yCoord;
    }
    
    double setR(double rCoord){ //because we are setting the RCoord from the parameterized constructor
        r = rCoord;
    }
    

//One that takes in parameters for circle

}; //end the haeder decleration