/*
Create a Time class. It should have fields for hours, minutes and
seconds. It should overload add (+) operator. The add (+) operator
should return a new Time object which holds the result of the addition.
The file ‘Time.cpp’ provides a basic test. The expected output is:
*/

#pragma once

#include <iostream>

using namespace std; 

//we need to craete a time class:

    class Time {

        private:
        //creating the variables to be exclusively used in the public function time()... 0 = placeholder....

        int hours = 0;

        int minutes = 0;

        int seconds = 0;


        public:

        //using a public member function and getting the variables inputted in the cpp function

         Time(int hourstemp, int minutestemp, int secondstemp){

                //we have to gather our numbers from the function call...

                this->hours = hourstemp;
                this->minutes = minutestemp;
                this->seconds = secondstemp;

        } //end of the function

        //https://www.geeksforgeeks.org/operator-overloading-c/ - for overloading

       Time operator + (Time const &object) { //declaring our overloading operator.

        //We need a default constructor:


            //New implementation help from:
            //https://stackoverflow.com/questions/53664806/c-error-no-matching-function-for-call-to
            //https://www.geeksforgeeks.org/this-pointer-in-c/

            /* RESULTS IN ERROR SINCE NO DEFAULT CONSTRUCTOR IS CREATED.... FOUND IMPLEMENTATION USING THIS-> WHICH IS A POINTING FUNCTION USED TO GET OUR VALUES AND "ASSIGN" THEM TO OUR NEW VARIABLES. 
            Time result; //a constructed Time object

            result.hours = hours + object.hours; 
            result.minutes = minutes + object.minutes;
            result.hours = hours + object.hours;
            */

            //now that we have figured out how to perfrom our addition... we need to also add up if we reach 60 seconds, minutes or seconds:

             
            
            if(this->seconds > 59){ //because past 59 we add 1 minute 

                this->seconds = this->seconds - 60; //we subtract by 60 in order to get back to 1..

                this->minutes = this->minutes + 1; //importantly adds another minute to the time if seconds goes over 59

            } //end of if

            if(this->minutes > 59){ //because past 59 we add 1 minute 
            
                this->minutes = this->minutes - 60; //we subtract by 60 in order to get back to 1..

                this->hours = this->hours + 1; //importantly adds another minute to the time if seconds goes over 59

            } // end of if

             return Time(this->hours + object.hours, this->minutes + object.minutes,  this->seconds + object.seconds); //return the result of all of this math
          

            

            //since in the cpp file we are saying Time time() ... i have to use another functionc

        } //creating our overloading operator:

       void print(){
           cout << hours << " Hours, " << minutes << " Minutes, " << seconds << " Seconds " << endl;
        }
        

};



//#endif //end of the header file