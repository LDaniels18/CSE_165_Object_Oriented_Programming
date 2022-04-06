#ifndef LA6_ADT_h
#define LA6_ADT_h

class ADT {
    
public:

/*
So here we see virtural implementations of derived methods:
since ADT doesnt explicitly use these functions, but is referenced "derived" in class Dervived we must reference 
these functions
*/
    virtual void doSomething() = 0;
    virtual void doSomethingElse() = 0;
    virtual void dontDoThis() = 0;
};

#endif