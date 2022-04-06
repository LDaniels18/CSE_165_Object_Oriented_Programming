//https://www.geeksforgeeks.org/header-files-in-c-c-with-examples/

#include <stdio.h>
#include "Stash.h" //including the headerfile that was provided.
#include <fstream> //to read the txt file in..
#include <iostream>

using namespace std;

int main()
{

    //we need to use struct since the header file contains a struct

    struct Stash header; // we need to call the struct from the header to create the variables to be used.

    //we need to prepare the file by opening it and then preparing to read
    ifstream myfile;

    //to open the file created 
    myfile.open("input.txt");

    //we need to call initialize by initializing some space
    header.initialize(20) // space of 20 

    //fill it up with double numbers
    double number; 

    // we need to use the stash member functions to complete program

    //reading the file and gathering the floating point numbers
    for

    //we need to use add() to put the number into the array of numbers

    //we can then close the txt file since we wont be reading from it anymore

    //display the words

    //use cleanup() to clean up space



} //end of main
