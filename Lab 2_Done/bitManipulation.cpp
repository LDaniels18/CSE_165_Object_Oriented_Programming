//Bit Manipulation Lab by LaFrance Daniels III

//Sources of Help:
//https://www.geeksforgeeks.org/set-clear-and-toggle-a-given-bit-of-a-number-in-c/
//https://www.tutorialspoint.com/How-do-you-set-clear-and-toggle-a-bit-in-C-Cplusplus
//https://www.geeksforgeeks.org/find-set-clear-toggle-and-modify-bits-in-c/

//Also Worked with students Richard Hernandez and Ivan Padilla on how to get the seperate functions to work...

#include <stdio.h>
#include <iostream>

using namespace std;

int decTobin(int number)
{ //taken from my program "fromatted output"

    //we need to divide the current base 10 num by 2
    //we need to check the quotient and remainder
    //if the remainder is zero then we are left with a 0 bit or if 1 then we get a 1 bit
    //we keep going until we cant divide anymore

    int answer[25]; //array of size 25
    int index = 0;  //to account for the bit at index of the array
    int temp = 0;   //to allow for the swap

    while (number > 0)
    { //so the number can be converted

        answer[index] = number % 2; //the answer variable takes the bit of the remainder (either 1 or 0)
        index = index + 1;          //now the index will increment, which will account for a place holder for a bit

       // cout << "index: " << index << endl;             //to see what bit we have
       // cout << "bit: " << (answer[index - 1]) << endl; //to see what bit we have

        number = number / 2; //we take the number we have a divide by to in order to get out other bits.

    } //end of the while loop

    //now we need to print the numbers in reverse order

    cout << "Decimal to Binary: ";

    for (int temp = index - 1; temp >= 0; temp--)
    { //the temp now holds the reverse placement for each bit... (index - 1) means backwards

        cout << answer[temp]; //the swap has been applied to the array of bits

    } //end of for

    cout << "" << endl;

} //end of helper function (Binary conversion)

//we are performing bitewise operations... so we need special functions: 

int getBit(int n, int index)
{
    int answer =  ((n & (1 << index)) != 0);

    cout << "Output at Index: " << index << " is: " << answer << endl;

}

int setBit(int n, int index)
{
    int answer =  (n |= (1 << index));

    cout << "Output at Index:  " << index << " is:  " << answer << endl;
}

int clearBit(int n, int index)
{
    int answer =  (n &= (~(1 << index)));

    cout << "Output at Index:  " << index << " is:  " << answer << endl;
}

int main()
{

    int decimal = 0;

    cout << "Enter a decimal number: " << endl;
    cin >> decimal;

    int binaryOutput = decTobin(decimal);

    //allow the user to select a method and an index:

    int choice = 0;
    int index = 0; 

    cout << "Choose 1 for getBit, 2 for setBit or 3 for Clearbit: (or -1 to quit)";
    cin >> choice;

    while(choice != -1){

        if(choice == 1){
            
            cout << "Enter a position index where 0 is the rightmost, to get: " << index << endl;
            cin >> index; 

            getBit(decimal, index);


        }if(choice == 2){

            cout << "Enter a position index where 0 is the rightmost, to set: " << index << endl;
            cin >> index; 

            setBit(decimal, index);

        }if(choice == 3){

            cout << "Enter a position index where 0 is the rightmost, to clear: " << index << endl;
            cin >> index; 

            clearBit(decimal, index);

        }else{

            cout << "Choose 1 for getBit, 2 for setBit or 3 for Clearbit: (or -1 to quit)";
            cin >> choice;
        }


         cout << "Choose 1 for getBit, 2 for setBit or 3 for Clearbit: (or -1 to quit)";
        cin >> choice;

    }

} //end of main