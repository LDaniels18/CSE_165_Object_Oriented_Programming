#ifndef Sortable_h
#define Sortable_h

class Sortable {
    
public:
    //The compare method tells the object how to compare itself with another object. It returns true if the object it is being called from is smaller than the other object. 
    virtual bool compare (const Sortable * s) = 0; //abstract datatype sortable

    //The print method allows the object to display itself.
    virtual void print () = 0;
};

#endif