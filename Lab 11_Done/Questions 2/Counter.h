#pragma once

#include<iostream>

using namespace std;

class Counter{ //creating class counter
public:

  int ID;
  int static count;


// https://stackoverflow.com/questions/10124609/auto-generate-id-in-c

Counter() : ID (count++) {
  
  cout << ID << " Created " << endl ;
}

~Counter(){
 
  cout << ID << " destroyed " <<endl;
}
};

//Literally took this from -- https://www.geeksforgeeks.org/overloading-new-delete-operator-c/


void * operator new(size_t size){ //creating a new instance of the * operator 
        cout<< "new "<< endl;
       
        void * p = malloc(size);   //allocating size for the creation of an array in the heap  
        return p;
    }

    void operator delete(void * p){
        cout<< "delete " << endl; //deleting 
        free(p);
    }

