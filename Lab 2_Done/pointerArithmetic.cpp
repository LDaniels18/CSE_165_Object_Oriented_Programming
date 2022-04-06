//Pointer Arithmetic Lab by LaFrance Daniels III

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

    int numberOne; // int
    int numberTwo; // int

    cout << "Enter a number: " << endl;
    cin >> numberOne;

    cout << "Enter a number: " << endl;
    cin >> numberTwo;

    //apply the pointer arithmetic

    int *num1; //a pointer int
    int *num2; //a pointer int

    // point to the inputted numbers with the addressing operator... * = the dereferencing operator.

    num1 = &numberOne;
    num2 = &numberTwo;

    //Multiply

    int answerofMultiplication = (*num1) * (*num2);
    cout << "Multiplication of two ints: " << answerofMultiplication << endl; //dont use the "&" because that would give the address at which the pointer is pointing to

    //Add

    int answerofAdd = (*num1) + (*num2);
    cout << "Add of two ints: " << answerofAdd << endl;

    //subtract

    int answerofSubtraction = (*num1) - (*num2);
    cout << "subtract of two ints: " << answerofSubtraction << endl;

    //divide

    int answerofDivision = (*num1) / (*num2);
    cout << "division of two ints: " << answerofDivision << endl;

} //end of main