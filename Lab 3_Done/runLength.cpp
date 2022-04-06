//Run Length Encoder lab - LaFrance Daniels III
//Write a simple run-length encoder: you will read a sequence of pairs containing a character and a number.
//For each pair (C,N), output the character N times without spaces.
//When a pair has number -1 print a newline, if the number is -2 then stop.

#include <stdio.h>
#include <string> //to use a string
#include <iostream>
#include <utility> //alows us to use pair..

using namespace std;

int main()
{

    char C = ' ';
    int N = 0;
    string answer; //to output strings of the characters N times...

    while (N != -2)
    {

        cout << "Please enter a character: " << endl;
        cin >> C;
        //cout << C << endl;

        cout << "Please enter a number : (enter -1 for a newline)" << endl;
        cin >> N;
        //cout << N << endl;

        if(N == -1)
        {
            cout << "\n"; //print out a new line... 
        }
        else
        {
            for(int i = 0; i < N; i++)
            {
                cout << C;
            }
        } 


        //second set of numbers and characters
        cout << "Please enter a character: " << endl;
        cin >> C;
        //cout << C << endl;

        cout << "Please enter a number : (enter -1 for a newline) " << endl;
        cin >> N;
        //cout << N << endl;


    } //end of the while loop
}