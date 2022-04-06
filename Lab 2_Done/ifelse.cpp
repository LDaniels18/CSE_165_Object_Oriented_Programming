// if else implementation by LaFrance Daniels III

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
//ask for user input:

int num = 0;

cout << "enter a number: " << endl;
cin >> num;


//check whether the number is positive or negative 

    if(num<0){

        cout<<"NEGATIVE"<<endl;

    }else{

        cout<<"POSITIVE"<<endl;
    }

//check for odd or even 

    if(num % 2 == 0){

        cout<<"EVEN"<<endl;
    }else{
        cout<<"ODD"<<endl;
    }


} //end of the program