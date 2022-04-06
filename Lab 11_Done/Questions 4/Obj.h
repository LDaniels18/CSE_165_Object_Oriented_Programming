#pragma once

#include "Shared.h"

/*
A class can delete itself when it detects that it is no longer needed. 
We are now going to use class Shared to implement the simplest version of what is called a "smart pointer", 
a way to achieve automatic memory management of objects allocated dynamically.
 Create class named Obj deriving from Shared. It should print "New" and "Delete" 
 from its constructors and destructor correctly so that the given code works. 
 Save your class in a file named Obj.h and submit that file. 
Use the files Shared.h, X.h, and selfDelete.cpp in order to test your code.
*/

using namespace std;

class Obj : public Shared{
  public:
  string n;

  Obj(string newString){    // object string needs to be accesed by all members of the objects
    n = newString;
    cout << " new " << n << endl; 
  }

  ~Obj(){
    cout << " delete " << n << endl;
  }
};
