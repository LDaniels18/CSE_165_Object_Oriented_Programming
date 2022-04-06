#include <iostream>
#include "Fib.h"

using namespace std;

int Fib::last = 1;
int Fib::secondLast = 0;

int main(int argc, const char * argv[])
{
    Fib myFib;
    Fib anotherFib;
    
    cout << myFib.secondLast << " " << myFib.last << endl; //WEHERE SECONDLAST IS PRINTED FIRST AND LAST IS PRINTED NEXT 
    
    for (int i = 0; i < 5; i++) {
        cout << myFib.next() << " ";
    }

    for (int i = 0; i < 5; i++) {
        cout << anotherFib.next() << " ";
    }
    
    cout << myFib.next() << endl;
    
    cout << anotherFib.next(true) << " ";
    
    for (int i = 0; i < 5; i++) {
        cout << myFib.next() << " ";
    }

    cout << endl;

    return 0;
} //end of main
