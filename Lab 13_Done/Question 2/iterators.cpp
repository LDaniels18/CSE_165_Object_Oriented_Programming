#include <iostream>
#include <math.h>

#include "DynArray.h"

using namespace std;

template <class A>
class Iterator
{
	int cur;
	A& arr;
public:

// For more info on iterators: https://www.geeksforgeeks.org/introduction-iterators-c/

	Iterator(A& a) : cur(0), arr(a) {}
	void begin() { 
		//write your code here

		//an iterator begins at index pos 0... so assumig cur = current position... we want iterator a to begin at position 0

		cur = 0;
	}
	void end() {
		//write your code here

		//we also know that an iterator ends when its reached the end of the container its in.... i.e the size of a vector: ... can we create a size function (since we cant use STL)

		cur = arr.size(); //i have to define the function in the header file:

	}
	bool atend() { 
		//write your code here

		//so the function says bool.... it probably checks if we have reached the end of the container:

		if(cur == arr.size()){

			return cur = arr.size();
		}
	}
	void advance() {
		//write your code here		

		//advance usually means go forward... so increment??

		cur++; //incrementing the current position by 1
	}
	void print() {
		//write your code here

		//following the assignment page for output:

		cout << cur << " : " << arr[cur] << endl; //position{index} : element 
	}
};

template <class A, class X>
void add_five(A& a)
{
	for (int i = 0; i < 4; i++)
		a.add((X)(2.0*cos(double(i))));
};


int main(int argc, const char * argv[])
{
	DynArray<int> ia;
	add_five<DynArray<int>, int>(ia);

	DynArray<float> fa;
	add_five<DynArray<float>, float>(fa);

	{ Iterator<DynArray<int>> it(ia);
	for (it.begin(); !it.atend(); it.advance()) it.print();
	}

	{ Iterator<DynArray<float>> it(fa);
	for (it.begin(); !it.atend(); it.advance()) it.print();
	}

	return 0;
}