// String Sizes Lab - LaFrance Daniels III
/*
Write a program that keeps reading in strings of varied sizes. If an input string has length greater than one store it in a vector. 
When an input string has length one (a single character) you will output the string stored in your vector that has the first letter matching the input character. 
Keep doing this while you read string "quit". Input: For example, the user inputs words having more than 1 letter are "Apple”, “Orange", "Banana”, “Apricot"and, then a character "a"Output: Apple Apricot
*/

#include <stdio.h>
#include <iostream>
#include <string> // to create and use strings
#include <vector> //to use a vector

using namespace std;

int main()
{

    string userInput;       //the string the user will input
                           
    char firstLetter = ' '; //we need to get the first letter of the word

    vector<string> list; //the vector carrying the words

    vector<string>::iterator word; //allows us to traverse the vector .. an iterator

    // cout << "Enter a word: (or enter a letter, quit to end the loop)" << endl;
    //cin >> userInput;

    while (userInput != "quit")
    {

        cout << "Enter a word: (or enter a letter, quit to end the loop)" << endl;
        cin >> userInput;

        if (userInput.length() == 1)
        { //check if the input is greater to 1 or equal to

            firstLetter = userInput[0]; //get the first character of the word.

            cout << "First Character of input: " << firstLetter << endl;

            //for (word = list.begin(); word < list.end(); word++) //prepares for use of the iterator by traversing the size of the vector (including all words in the vector)
            //{ //.begin = start of word, .end = end of word.... like saying .length()

                for (int j = 0; j < list.size(); j++) //allows for the use of a comparison of the first letter of the word in the vector and the first letter of an input.
                {

                    if (list[j].front() == firstLetter) //comparing the
                    {
                        cout << "Word: " << list[j] << endl; //using a dereference to get to the word in the vector.. *word --- points to the word in the vector
                    }

                } //end of for

          //  } // end of for...

        } //end of if

        else if (userInput == "quit") //checks exclusively for a quit
        {
            break; //ends the program
            
        } 
        else //will always put the word into the vector...
        {

        list.push_back(userInput); //to put the word in the vector 

        }

    } //end of the while loop

} //end of main