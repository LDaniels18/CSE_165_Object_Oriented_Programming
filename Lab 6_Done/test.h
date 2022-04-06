#include <iostream>
using namespace std;
//class for representing 2D vector
class Vec
{
   public:
       float x,y; //data memebers
  
       const static Vec null; //a null vector representing (0,0)
       
       Vec() //default constructor
       {
           x=y=0.0f;  
       }
       //constructor to initialize with given values for vector      
       Vec(float x1,float y1)
       {
           x=x1;
           y=y1;
          
       }
       //function to add the x and y components of the given vector to current vector
       void add(Vec v)
       {
           x+=v.x;
           y+=v.y;
       }
       //display the vector object
       void print()
       {
           cout<<"("<<x<<","<<y<<")";
       }
};
const Vec Vec::null(0.0f,0.0f); //initializing the null static class variable