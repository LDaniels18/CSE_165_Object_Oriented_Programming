#pragma once

#include<iostream>

using namespace std;

class Counter{
public:

  int ID;
  int static count;


Counter() : ID(count++){
  
}

~Counter(){
  
}


// https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/


void * operator new[](size_t S){ //we need a [] operator to properly create our array 

  int N = S/sizeof(count) - 2; //the N which is the number of objects being created
  
    cout<< "new " << N <<" counters starting at "<< count<< endl;
       
        void * p = malloc(S);   //dynamiacally allocating space on the heap size S  
       

    }

    void operator delete[](void * p)
    {
        cout<< "delete counters" << endl;
        
    }
};


