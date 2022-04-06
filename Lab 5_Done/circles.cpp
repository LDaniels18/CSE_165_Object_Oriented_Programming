#include <iostream>
#include "Circle.h"

using namespace std;

int main(int argc, const char * argv[])
{
	Circle myCircle; //calling the class constructor circle and naming the unit circle "mycircle"

	
	cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl; //we use get
	cout << "Radius:\t" << myCircle.getR() << endl;
	cout << "Area:\t" << myCircle.area << endl;

	
	myCircle.setX(1); //we use set
	myCircle.setY(2);
	myCircle.setR(3);

	cout << endl;

	

	cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
	cout << "Radius:\t" << myCircle.getR() << endl;

	myCircle.setX(6); //we use set
	myCircle.setY(2);
	myCircle.setR(9);

	cout << endl;

	

	cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
	cout << "Radius:\t" << myCircle.getR() << endl;
	//cout << "Area:\t" << myCircle.area << endl;

	myCircle.setX(10); //we use set
	myCircle.setY(3);
	myCircle.setR(2);

	cout << endl;

	

	cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
	cout << "Radius:\t" << myCircle.getR() << endl;
	//cout << "Area:\t" << myCircle.area << endl;



	return 0;
}