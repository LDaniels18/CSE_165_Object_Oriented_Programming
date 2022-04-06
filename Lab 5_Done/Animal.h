#pragma once //so you dont have to use the intial header statements
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
	string name;
	int age;

	//creating a count variable 
	int count = 0;


public:
	//adding the count to the animal file 
	

	Animal() {
		cout << "Creating Generic Animal" << endl;
		name = "Generic Animal";
		age = 0;

		cout << "Count: " << count + 1 << endl;
	}


	Animal(string name, int age) {

		setName(name); //setting the name for the dog (bruno)
		setAge(age);

		cout << "Creating Generic Animal" << endl; //printing out that a dog is being created

		cout << "Count: " << count + 1 << endl;
	}

	void display(const vector<Animal*> & list) {

	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	//###############################################//
	//This is Automatic!

	//https://www.geeksforgeeks.org/destructors-c/
	~Animal() { //bitwise NOT .. so the ones compliment would more than likely shift to another space?
		cout << "Deleting Generic Animal" << endl;
	} //end of destructor 

	void feed() {
		cout << "Some meal, please!!" << endl;
	}

};
