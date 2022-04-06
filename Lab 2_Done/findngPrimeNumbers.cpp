//Finding Prime Numbers Implementation by LaFrance Dnaiels III


/*
Any number which is greater than 1 and it should either be divided by 1 or the number itself is called a prime number.
Via https://www.educba.com/prime-number-in-c-plus-plus/
*/


#include<stdio.h>
#include<iostream>

using namespace std;

// we want to print out all numbers that are less than N that could are prime

int main(){

    int N = 0; //inputted number to hold a number

    cout << "Please enter a number: " << endl;
    cin >> N;


    //we need to be greater than one greater than 1

while(N > 1){

    cout << "All prime numbers less than: " << N << endl;

    //we want to go from left to right in our iteration: 
    for(int start = 2; start < N; start++){

        cout << "start: " << start << endl;

         int flag = 1; //to tell whether the number is prime or not, prime == 1

        for(int currentNum = 2; currentNum <= (start / 2); currentNum++){  //we iterate from the current num starting at 2... and make sure the current num is smaller than the number at 2

                    cout << "start / 2: " << (start/2) << endl;
                    cout << "currentNum: " << currentNum << endl;

                    if(start % currentNum == 0){ //where if the starting number divided by the currentnumber is 0 its not prime 

                            cout << "start % currentNum: " << start % currentNum << endl; 
                            flag = 0;

                            break; //because we found numbers that arent prime

                    } //end of if

        } //end of second for

            //print out all primes less than N
            if (flag == 1){

                cout << "Prime: " << start << endl; 

            } //end of if


    }//end of for

    break;
}//end of while

    if(N <= 1){

        cout << "Number is not Prime" << endl;
    } //end of if

}