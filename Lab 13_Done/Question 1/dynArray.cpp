#include <iostream>
#include <math.h>

#include "DynArray.h" //header file to be 

using namespace std;

template <class A, class X> //template class of two different classes for the purpose of passing data types

void set_five(A& a) //defined in the cpp file:

{
	X x = 0;
	for (int i = 0; i < 5; i++)
	{
		x = (X)(2.0*cos(double(i))); //returns cosine of the given argument in radians
		a.add(x); //object of class A utilizes public function add to add values together
		cout << a[i] << " "; //printing out the results after add has been called
	}
	cout << endl;
}

int main(int argc, const char * argv[]) //main output and function:
{

	//using the class template to call the set five function for two diffent data types:

	DynArray<float> fa; //object named fa
	set_five<DynArray<float>, float>(fa); //call to function <template class <data type(s)>> (parameter)

	DynArray<int> ia;
	set_five<DynArray<int>, int>(ia);
	return 0;
}