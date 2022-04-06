// reading ints lab - 
/*
Write a program that keeps reading in integer values. If an input value is positive, store it in a vector. 
If the input value is negative, you will remove all existing values in your vector with the same absolute value. 
When 0 is read output the  number of entries  that remained in the vector and the sum of all entries. Then stop.
*/

//Source for the Erase method -- https://iq.opengenus.org/ways-to-remove-elements-from-vector-cpp/
#include<vector>
#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main(){

int value; //a value to be inputted 
int sumNum = 0; //will be the sumNum of all numbers in the vector

vector<int> list; //creating our vector... 
vector<int>::iterator num; //didnt actually need...

    cout << "Enter a number to begin the program (will not be counted in the list of nums): " << endl;
        cin >> value; //the value input 

    while(value != 0)
    {
        cout << "Enter a number: (positive to enter into list and negative to remove existing values, or 0 to output and quit)" << endl;
        cin >> value; //the value input 

        if(value > 0) //when the number is positive 
        {
            list.push_back(value); //put the value into the vector 
        }
        else //when the number is negative
        {
            for (int i = 0; i < list.size(); i++) //allows for the use of a comparison of the first letter of the word in the vector and the first letter of an input.
                {

                   if(abs(value) == list[i]) //if the item is negative, we get an absolute value and compare it...
                    {
                        //list[i] = abs(list[i]); //take the absoulte value of the negative num

                        //num = list[i];
                        list.erase(list.begin() + i); //removes the item from the vector by using a shift top the ith element

                    }

                } //end of for

        }//end of if


        if(value == 0) //to print the sum and numbers in the vector then break
        {
            cout << "List of numbers in vector: "; //no endline to merge with the next set of output 
            for(int i = 0; i < list.size(); i++)
            {
                cout << list[i] << ","; //printing out all the nums in the vector

                sumNum = sumNum + list[i]; //getting the sum of all numbers... 
            }

                cout << "\n" <<  "sumNum of all the numbers: " << sumNum << endl; //prints the sum of all nums in vector

            break;
        }
    } //end of while



}//end of main


