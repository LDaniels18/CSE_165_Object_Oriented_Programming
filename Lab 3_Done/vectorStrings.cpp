// vector of strings lab

/*
Write a program where you will have a vector V where each entry is a pointer to a vector of strings. 
This means that each entry in V points to a vector of strings. 
Your program will then read input strings. 
For each string, if the number of characters in the string is N, then add it to the string vector in entry V[N-1]. 
Be sure to allocate the string vector in each entry as needed. 
The input string will have a maximum of 10 characters so you can initialize V with 10 entries. 
Do not add repeated entries. 
Stop when string "quit" is read. String "quit" should not be processed. 
Then output the contents of each V entry in order from V[0] to V[9], 
separated by spaces within the same V entry and by  a  new  line  when  switching  to  the  next  entry.  
Skip  empty  entries.
*/

#include <vector>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    vector<vector<string>> V(10);   //vector V where each entry is a pointer to a vector of strings with a size of 10.... V[0] - V[9]

    //the string to be used...
    string word;

    cout << "Please enter a word: (quit to end program)" << endl;
    cin >> word;

    while (word != "quit")
    {
        if ((word.size() > 10)) //if the word is greater than 10 characters, we dont continue...
        {
            break;
        } //end of the if statement

        //all words that pass the first 2 constraints are pushed into the vector
        
        if (word.size() != 0)
        {
            V[word.size() - 1].push_back(word); //what we are doing is placing the word in a row specific to its size... for instance {word.size - 1} implies an index within the vector V... only a word of lets say 5 will be placed in the 4th index in the array but each word is in its own column
            
            int index = word.size() - 1;

            cout<< "Index: " << index << endl;

        }

        cout << "Please enter a word: (quit to end program)" << endl;
        cin >> word;

    } //end of the while...

    //the way to output the contents of a 2D array:
   // https://www.geeksforgeeks.org/2d-vector-in-cpp-with-user-defined-size/

    for(int i = 0; i < V.size(); i++){
        for(int j = 0; j < V[i].size(); j++){
            
            cout <<"Row: " << i << " Column: " << j << " ";

            cout << V[i][j] << " " ; //will output words given by their length - 1 (row) and their occurrence (column) 

            cout << endl;

        } //end of inner for loop

    } //end of the outter for loop

    for(int i = 0; i < V.size(); i++){
        for(int j = 0; j < V[i].size(); j++){
            
            //cout <<"Row: " << i << " Column: " << j << " ";

            cout << V[i][j] << " " ; //will output words given by their length - 1 (row) and their occurrence (column) 

        } //end of inner for loop
            cout << endl; //spaces out each word by row
    } //end of the outter for loop

} //end of main...