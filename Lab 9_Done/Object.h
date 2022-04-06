
#pragma once

#include <iostream>
 
/*
Study the file Object.h. It defines an abstract data type Object with a 
virtual multiply() function. 

Complete the implementation of two classes 
Number and Coord3D which inherit from the Object class. 

The multiply() function must dynamically create a new object to hold the result of the 
computation. 

If the operands of multiply() are both Numbers, then the
result should be a Number. 

If one operand of multiply() is a Coord3D, 
and the other is a Number, then the Number should multiply each 
component Coord3D. If both are Coord3Ds, then the result should be a 
component-wise multiplication. 

The file Object.cpp provides a basic test.
*/


using namespace std;


//Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

//The Object ADT  //the entire Data Type defined to execute operations
class Object { //the parent class 
public:
	//function multiply of a virtural (abstract data types)
	virtual Object* multiply ( const Object* obj ) const = 0;  //object is a pointer (abstract data type)... virtual refers to the fact that it isnt used directly in the Object class but since Object is being derived the function instance must be declared:

	//https://stackoverflow.com/questions/29213112/what-is-the-difference-between-const-virtual-and-virtual-const
	//const refers to the object the method is called on or the data type itself... the variable remains constant

	virtual void print() = 0;
	virtual ~Object() {}

}; //end of class

class Number : public Object{ //class Number with derived class Object
public:

	//public variables of class

	int num; //a public variable to hold the number in the Object.cpp file

	//default constructor:

	Number(){
		num = 0; //num is ready to hold a number 
	} //instance of Number method 

	//Getter
	Number(int n){
		num = n; //now num holds the number n holds 
	}

	//deletion ****** to fix
	~Number(); //Deleting the number method

	/* 
	 * if other is a Number, then this should return a Number
	 * if other is a Coord3D, then this should return a Coord3D
	 * Hint: typeid(var) might be a helpful operator to know the type of an object at runtime
	 */ 

	 //multiply() function must dynamically create a new object to hold the result of the computation
	 Object* multiply(const Object* other) const; //ADT Object and function multiply 
	//an object called other is used to hold the answer when multiply is done


	//printing function to display output:
	void print(){
		//we want to print out the number:

		cout << "num = " << num << endl;
	}

}; //end of class Number


class Coord3D : public Object { //class Coor3D with derived class Object
public:

	int x, y, z;

	//default constructor:

	Coord3D(){
		//get all 3 coords ready to hold a variable:
		x = 0;
		y = 0; 
		z = 0;

	}

	//Getter 

	Coord3D(int x1, int y1, int z1){
		//now gather the coords and apply them to our local variables:
		x = x1;
		y = y1;
		z = z1;
	}

	//deletion

	~Coord3D();

	// This should return a Coord3D .. we need to use typeId to figure out how to compute
	 Object* multiply(const Object* other) const;

	void print(){
		//printing out the coordinates:
		cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	}

}; //end of class Coord3D

	//Working with Type Casting: --https://www.cplusplus.com/doc/oldtutorial/typecasting/ -- Ivan Padilla

	Object* Number:: multiply(const Object* other) const{

        Coord3D *refCoord;
        Number *refNum;

      if(typeid(*other)== typeid(Number)){
       

        Number* newNumber = new Number;

          refNum = ((Number*)other); //type casting other
          newNumber->num = refNum->num * this->num; //in rerefrence numthere is a variable num for default constructor
        
         
          return newNumber;
      }
      
      else{ //n*cord

        Coord3D* newCoord = new Coord3D;

        

           refCoord= ((Coord3D*)other); //type casting other

          newCoord->x = refCoord->x * this->num;
          newCoord->y = refCoord->y * this->num;
          newCoord->z = refCoord->z * this->num;

        return newCoord;
      }
}

Object* Coord3D:: multiply(const Object* other) const{
  
      
      Coord3D* refCoord;
      Number* refNum;
      Coord3D* newCoord = new Coord3D ; 

       if(typeid(*other)== typeid(Coord3D)){
            // cout<<"multiplying COORD*COORD while in COORD3d \n"<<endl;
             refCoord= ((Coord3D*)other); //type casting other
          newCoord->x = refCoord->x * this->x;
          newCoord->y = refCoord->y * this->y;
          newCoord->z = refCoord->z * this->z;

          return newCoord;
      }

      else{ //n*cord
      
          
            refNum= ((Number*)other); //type casting other

          newCoord->x = refNum->num * this->x;
          newCoord->y = refNum->num * this->y;
          newCoord->z = refNum->num * this->z;

           return newCoord;
      }

    }


     




