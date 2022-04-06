#include <iostream>
#include "Mat.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Mat a ( Mat::Identity );
    Mat b ( 1.0f, 2.0f, 1.0f, 4.0f );
    
    
    Vec v = (((a + b) - (4*a)) + a*b)*Vec(1,2);
    cout << v << endl;
    return 0;
}

//to be completed
