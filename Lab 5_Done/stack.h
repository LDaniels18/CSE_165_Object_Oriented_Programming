#pragma once
#include <iostream>


//Extend the file stack.h containing Stack class given in order for it to store double numbers (instead of void* pointers).  and for each element destroyed the element will be printed to the output. Now add two constructors: the default one that will create an empty stack, and another one that will receive an integer n and will build a stack of n elements, such that the first element is 1.0, and the next ones are incremented of 0.1.
struct Stack {

//####################################
//stac is basically held in head
	struct Link {
		double data;
		Link* next;

		void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
	}*head;

	//Now add two constructors: the default one that will create an empty stack, and another one that will receive an integer n and will build a stack of n elements, such that the first element is 1.0, and the next ones are incremented of 0.1.

	public:

	void initialize() {
		head = 0;
	}


	Stack(){
		head = NULL; //creating an empty stack
	}

	Stack(int n){

		
		double first = 1.0; //since the first element is 1.0

		for(int i = 0; i < n; i++){

			push(first); //pushing the element in the stack

			first += 0.1; //incrementing up .1

			
		}

	}

	//Add a destructor that will delete all the stack by making calls to pop(), and for each element destroyed the element will be printed to the output.

	~Stack(){

		while(head != NULL){

		std::cout << pop() << " " << std::endl; //pop deletes the element at the top of the stack

		}
	}
		
		//methods
	
	double push(double dat) {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}

	double peek() {
		if (head == 0) {
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	double pop() {

		if (head == 0)
			return 0;

		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}

	
	void cleanup() {
		if (head == NULL) {
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
			//std::cout << pop() << " " << std::endl;
		}
	}
	
};