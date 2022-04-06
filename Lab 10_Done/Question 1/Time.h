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

    class Time{

        private:
        //creating the variables to be exclusively used in the public function time()... 0 = placeholder....

        int hours = 0;

        int minutes = 0;

        int seconds = 0;


        public:

        //using a public member function and getting the variables inputted in the cpp function

         Time(int hourstemp, int minutestemp, int secondstemp){

                //we have to gather our numbers from the function call...

                hours = hourstemp;
                minutes = minutestemp;
                seconds = secondstemp;
        } //end of the function

        //https://www.geeksforgeeks.org/operator-overloading-c/ - for overloading

       Time operator + (Time const &object){ //declaring our overloading operator.

            Time result; //a public member variable of class Time 

            result.hours = hours + object.hours; 
            result.minutes = minutes + object.minutes;
            result.hours = hours + object.hours;

            //now that we have figured out how to perfrom our addition... we need to also add up if we reach 60 seconds, minutes or seconds:

            if(result.seconds >= 59){ //because past 59 we add 1 minute 

                result.seconds = result.seconds - 60; //we subtract by 60 in order to get back to 1..

                result.minutes = result.minutes + 1; //importantly adds another minute to the time if seconds goes over 59

            } //end of if

            if(result.minutes >= 59){ //because past 59 we add 1 minute 
            
                result.minutes = result.minutes - 60; //we subtract by 60 in order to get back to 1..

                result.hours = result.hours + 1; //importantly adds another minute to the time if seconds goes over 59

            } // end of if

            return result; //return the result of all of this math

            //since in the cpp file we are saying Time time() ... i have to use another functionc



       } //creating our overloading operator:

       void print(){
           cout << hours << "Hours, " << minutes << " Minutes, " << seconds << " Seconds " << endl;
       }
        

    };



//#endif //end of the header file