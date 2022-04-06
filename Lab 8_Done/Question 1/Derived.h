#pragma once

#include <iostream>
#include "ADT.h"

using namespace std; //important unless you want to explicitly derive STD

class Derived : public ADT{ //which will inherit from ADT

public:

    void doSomething(){

        cout << "I did something" << endl;
    }

    void doSomethingElse(){

        cout << "I did something else" << endl;
    }

    void dontDoThis() {
          cout << "/n" << endl;
    }
};