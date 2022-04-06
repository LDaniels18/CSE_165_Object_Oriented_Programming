

#include<vector>
#include<iostream>
#include "Sortable.h"

using namespace std;

class Circle :public Sortable {
public:
   int radius;

   Circle() {
       radius = 0;
   }
  
   Circle(int i) {
       radius = i;
   }

   bool compare(const Sortable * s) { //of type Sortable
        if (this->radius < ((Circle*)s)->radius) { return true; //this-> is a [pointer]
       }
       else {
          return false; 
          }
   }

   void print(){
       cout << "Circle with radius: "<< this->radius<<endl;
   }

};