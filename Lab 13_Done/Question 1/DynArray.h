/*
In the dynArray.cpp file, a newArraylate class DynArray is needed for it to
correctly compile and display the given output when executed. 
Provide its implementation in a header file DynArray.h
*/

#pragma once

#include <iostream>

using namespace std;


template <class T> // T is the input originalArray: #### must always be referrenced when using a newArraylate:

class DynArray{ //class dynArray
  
private: //Access specifier

//not really needed:

public: //Access specifier

    //main variables and functions to use:

   int sizeArray; //the size of the array to be used 
   T * originalArray; //pointer for our array Data

   T operator[] (int); //instntizating our use of the [] operator:


    //constructing the array:

   DynArray(){

       //determining our intitial array size
    sizeArray = 0; //sizeArray intialized to 0

    //creating a new instance of an array
    originalArray = new T[sizeArray]; //allocated memory forsizeArray objects -- basic array creation with T being the name of the Array  ###original array 

   } //end of the construction 

    ~DynArray(){    //good programming practice principles:

        delete[] originalArray; //since originalArray is pointing to the Array of T
    }

   //adding a new element to the array:

   void add(T x){ //taking an input of int x ... and adding it to the new array to be created...

       //new array for storing originalArray, with sizeArray 1 greater than sizeArray of originalArray array

       T * newArray; //the new array to be used to take the previous values and store them
       
       newArray = new T[sizeArray]; //creating a new instance of array of T

       //we need to take the elements from originalArray and move to new Array 

       for(int i = 0; i <sizeArray; i++){

           newArray[i] = originalArray[i]; //finding the correct index between both arrays .. and essentially copying the elements into the new array at the correct position:

       }

       newArray[sizeArray] = x; //at that index... we will add the new element x

       originalArray = newArray; //now OrignalArray assumes the data in new Array by pointing to its elements (remember these arrays are built of pointers 'T *')
       
       sizeArray++; //since we are adding elements.. we need to increase the size of the array to make room for as many new elements as we will add
       
   }


};

//for the [] operator: https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

template <class T> //must always be referrenced when using T.... in any function defined outside the DynArray Class:

//to allow for use of the [] operator --- from a[i] in main
T DynArray<T>::operator[](int index){

       return originalArray[index]; //retuning the elements we want to see
   }