#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

struct LinkedList { 
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head;

    Link *end;
    int size;
    
    // This should initialize fields for the empty LinkedList
    void initialize() {

	}
	
    /* 
     * This adds an element containing *dat 
     * to the end of the LinkedList.
     * It assumes that *dat is dynamically allocated
     */
    void add(void* dat) {

    }
	
    /* 
     * This returns the data at position index 
     */
    void* get(int index) {
        
    }
	
    /* 
     * Frees the memory of the LinkedList
     */
    void cleanup() {
        
    }
};
#endif
