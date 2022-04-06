/*
Write a program where you keep reading strings from the input, and then: 
if the number of characters is four or more, 
you will store the string in a vector; if the number of characters is less than or equals to three, 
you will find the strings which begin with the input string in the vector of strings, 
and then you will output the found strings. 
Stop when string "quit" is read. String "quit" should not be processed.
*/

//https://www.codeproject.com/questions/453779/what-is-the-difference-between-size-and-length-fun - for the difference between .length and .size
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    vector<string> list;
    vector<string>::iterator word;

    string input; //string used as input

    cout << "enter a word (quit to end program): " << endl;
    cin >> input;

    while (input != "quit")
    {

        if (input.size() > 3)
        {

            list.push_back(input); //puts the word into the vector

            for (word = list.begin(); word < list.end(); word++)
            {

                cout << "word in vector: " << *word << endl; //to check if words are being inputted into the vector as we iterate.
            }
        }
        else if (input.size() <= 3) //when the word is less than or equals 3

        {

            //https://www.geeksforgeeks.org/substring-in-cpp/ --help with substr()

            for (int i = 0; i < input.size(); i++) //starting from the first to the last character of the word
            {

                if (list[i].substr(0, input.size()) == input)
                {

                    cout << list[i] << endl; //out puts the words in the list that match the characters from 0 to the length of the 3 character string

                } //end of if

            } //end of for

        } //end of else

        else
        { //if anything else happens...we break

            cout << "error" << endl;
            break;
        }

        cout << "enter a word (quit to end program): " << endl;
        cin >> input;

    } //end of while

} //end of main