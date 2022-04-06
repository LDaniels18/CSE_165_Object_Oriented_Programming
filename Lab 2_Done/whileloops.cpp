// While implementation by LaFrance Daniels III

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
//ask for user input:

int num;

    

cout << "enter a number: (do not enter 0)" << endl;
cin >> num;

while(num != 0){
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

    cout << "enter a number: (enter 0 to stop the program)" << endl;
    cin >> num;

}//end of while

} //end of the program