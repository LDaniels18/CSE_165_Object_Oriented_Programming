//Task 2:

/*our task is to write a class called Data, stored in a file named Data.h. 
Your class should be able to store a collection (vector) of integers. In 
addition to the appropriate constructors, your class should also have the 
following methods
*/
#include <iostream>
#include <vector>

using namespace std;

class Data{ //class data

 vector<int> list; //allowing us to use a vector called list of int variables 
  public:

  // a default constructor 
  Data(){


  }
   //initialze -- getting our vector:
   Data(vector<int> v) { //we are gonna decalre a vector constructor of data class
         list = v; 
   }

   //Setters -- outputting our values:

  void add(int number){ // putting something into my vector
 
    list.push_back(number); // Adds a number to the data set.

  } //end of void

  //https://www.geeksforgeeks.org/how-to-sort-a-vector-in-descending-order-using-stl-in-c/ -- on printing the elements of a vector:

  void print(){

    for (int i =0; i< list.size(); i++)
      cout << list[i] << " ";
      cout << endl;

  } // end of print

  void sort(){ //double check this sorting method -- Worked with Ivan Padilla 

        int j = 0;
        int temp = 0;

        for (int i = 1; i < list.size(); i++){  
                temp = list[i];  
                j = i - 1;  //iterating down (descending)

                while (j >= 0 && list[j] > temp){  
                    list[j + 1] = list[j];  
                    j = j - 1;  //iterating down (descending)
                }  

                list[j + 1] = temp;  
            }//end of the for

      } //end of sort 
};
