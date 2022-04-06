// formatted output program by LaFrance Daniels III

#include<stdio.h>
#include<iostream>

using namespace std;


int decTobin(int number){

    //we need to divide the current base 10 num by 2
    //we need to check the quotient and remainder
    //if the remainder is zero then we are left with a 0 bit or if 1 then we get a 1 bit
    //we keep going until we cant divide anymore


     int answer[25]; //array of size 25
     int index = 0; //to account for the bit at index of the array
     int temp = 0; //to allow for the swap

    while(number > 0){ //so the number can be converted

        answer[index] = number % 2; //the answer variable takes the bit of the remainder (either 1 or 0)
        index = index + 1; //now the index will increment, which will account for a place holder for a bit

         cout << "index: " << index << endl; //to see what bit we have
        cout << "bit: " << (answer[index - 1]) << endl; //to see what bit we have
        
        number = number / 2; //we take the number we have a divide by to in order to get out other bits.

       
    }//end of the while loop

    //now we need to print the numbers in reverse order

        cout <<  "Decimal to Binary: ";

    for(int temp = index - 1; temp >= 0; temp--){//the temp now holds the reverse placement for each bit... (index - 1) means backwards

        cout << answer[temp]; //the swap has been applied to the array of bits

    }//end of for 

     cout << "" << endl;
    
}//end of helper function



int decTohex(int number){

/*
    char answer[50]; //since we will be getting characters
    int index = 0;

    while(number > 0){

    }
*/


   char answer[50]; //array of size 25
     int index = 0; //to account for the hexnum at index of the array
     //int temp = 0; 
     int swap = 0; //to allow for a number swap
     //int swap[50];

    while(number > 0){ //so the number can be converted

        answer[index] = number % 16; //the answer variable takes the hexnum of the remainder (either 1 or 0)
       
        if(answer[index] < 10 ){ //remainder from 0-9

        answer[index] = answer[index] + 48; //in ASCII table
         index = index + 1; //now the index will increment, which will account for a place holder for a hexnum


        } else{ //for any number greater than 9

        answer[index] = answer[index] + 55; //in ASCII table
         index = index + 1; //now the index will increment, which will account for a place holder for a hexnum


        }

        //cout << "index: " << index << endl; //to see what hexnum we have
        cout << "hexnum: " << (answer[index - 1]) << endl; //to see what hexnum element we have
        
        number = number / 16; //we take the number we have a divide by to in order to get out other bits.

       
    }//end of the while loop

    //now we need to print the numbers in reverse order

        cout <<  "Decimal to hexadecimal: ";

    for(int swap = (index - 1); swap >= 0; swap--){//the temp now holds the reverse placement for each hexnum... (index - 1) means backwards

        cout << answer[swap]; //the swap has been applied to the array of hexnums

    }//end of for 

    cout << "" << endl;

}//end of helper function



int main(){

    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    while(num != -1){

        decTobin(num); //call the function
        decTohex(num); //call the function


    cout << " " << endl;
    cout << "Please enter another number: (or -1 to end)" << endl;
    cin >> num;
    //break;

    } //end of while..
    
}//end of main

