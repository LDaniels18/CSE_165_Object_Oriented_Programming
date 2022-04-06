#include<iostream>
#include<stdio.h>
#include<vector>


using namespace std;

int main(){

    vector<int> list = {1,2,3,4,5};

    //print out the vector:

    for(int i = 0; i < list.size(); i++){

    cout << list[i] << " ";
    cout << endl;

    }

    cout << " " << endl;
    //sorting it backwards.. then printing

    for(int i = list.size() - 1; i >= 0; i--){

     cout << list[i] << " ";
    cout << endl;
    }


}
