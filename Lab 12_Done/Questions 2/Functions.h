#ifndef LA12_Functions_h
#define LA12_Functions_h

#include <iostream>

using namespace std;

namespace MyLib {
    void f(){ //when f is called the output will result in this....
        std::cout << "f" << std::endl;
    }
    void g(){
        std::cout << "g" << std::endl;
    }
}


#endif