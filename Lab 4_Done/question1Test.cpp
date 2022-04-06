#include<iostream>
#include<fstream>
#include "Stash.h"
using namespace std;

int main() {
     ifstream txt;
     struct Stash s;
     double n;

     txt.open("input.txt");
     s.initialize(10);

     while(!txt.eof()) {
          txt >> n;
          s.add(&n);
     }

     txt.close();

     for(int i = 0; i < s.count(); i++) {
          cout << *(double*)s.fetch(i) << " ";
     }
     s.cleanup();
     // system("pause");

     return 0;
}