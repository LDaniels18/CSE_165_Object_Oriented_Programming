#pragma once //allows for a header declaration -- no need to compile 

#include <iostream>

//next in STD -- https://www.geeksforgeeks.org/stdnext-in-cpp/
//using extern -- geeksforgeeks.org/understanding-extern-keyword-in-c/
//using extern -- https://stackoverflow.com/questions/496448/how-to-correctly-use-the-extern-keyword-in-c


using namespace std;

extern int last , secondLast; //will this allow us to use the variables from fib.cpp

/*
Create a class that returns the next value in a Fibonacci sequence every time you call its next() method. 
The class should only have two static members.  
The next() method should have an argument that is a bool with a default value of false such that when you give the argument with true it "resets" the function to the beginning of the Fibonacci sequence.
*/

class Fib
{
    private:
     //private is not being used  
    public:
    //creating the static members -- which is open to all members of the class

    static int last, secondLast; //as declared in the main file
    //int last = 1;
    //int secondLast = 0;

    // Is this really needed???? -- WE dont since a getter isnt needed. 
    //lastval = last;

    //cout << "last val is: " << lastval;

    //secondlastval = secondLast; 
    
/* troubleshooting how to create our bool variable 
   static bool default;
   default = false;
    static bool flag;
    flag = default; //set to false (default)
*/

//#####################################################
//It appears the only fix is to directly declare and define flag within the next() parameter list 
//#####################################################

    //  REMEMEBER.... THE VALUES LAST AND SECONDLAST WILL ALREADY HAVE A VALUE ASSOCITED WITH THEM AT RUNTIME....

    int next(bool flag = false){     //we want to return a number of int type // the flag must be defined and declared when the function is called 

        
    //to reset our nums.... we manually reset
        if(flag == true){
            //we have to reset by setting both last = 1 and secondlast = 0:

            last = 1;
            secondLast = 0;

        }//end of if


    //from here we can perform out arithmetic to get the added value to print..  WE DONT NEED A COUT:

    //first we need the added value which is the next value:
        int nextvalue = last + secondLast;
    //second we have to shift our intitial values by assigning the new "nextval" to the last... and the last val to secondlastval

        secondLast = last; //must be declared before the last to next value...

        last = nextvalue;
        
    //finally we return the nextval
        return nextvalue;
    }//end of the next function definition


}; //ending of the class Fib