#pragma once

#include <iostream>

using namespace std;

class Counter{ //creating class counter
public:

  int ID;
  int static count;


Counter() : ID (count++) {
  
  cout << ID << " Created " << endl ;
}

~Counter(){
 
  cout << ID << " destroyed " <<endl;
}
};

