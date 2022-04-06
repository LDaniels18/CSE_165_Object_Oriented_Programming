//more on inheritance 

#include "Animal.h"
#include "Dog.h"
#include "display.h"
#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){

//Then write a C++ program that reads in an integer N.
int N;

cout << "Please enter a number for N: " << endl;
cin >> N;

//check the Animal header: void display(const vector<Animal*> & list) {
        vector<Animal*> array;
// The character will either have the value A or D, indicating whether the animal described on this line is a generic animal or a dog. The string indicates the animal's name and the integer, its age.

//// This is followed by N lines, where each line contains a character, a string and an integer, separated by space.
    for(int i = 0; i < N; i++){
        char character;
        string names;
        int integer = 0;

        //we need to create a vector:

        

        cout << "Please enter a number for character (A for Generic Animal, D for Dog or q for quit): " << endl;
        cin >> character;
        cout << "Please enter a number for string: " << endl;
        cin >> names;
        cout << "Please enter a number for integer: " << endl;
        cin >> integer;

        //while(character != 'q'){

            if(character == 'A'){
                //we need to push to the vector
                 array.push_back(new Animal(names, integer)); //the keyword new creates a new instance of the class every time.
            }
            else if(character == 'D'){
                 array.push_back(new Dog(names, integer));
            }
       // }

    //time to use display
    display(array);

    }

    //checking for A or D

    
}//end of the main class