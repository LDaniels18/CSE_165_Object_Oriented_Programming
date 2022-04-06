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

 vector<Sortable*> list; //allowing us to use a vector called list of Sortable type variables
  public:

  // a default constructor 
  Data(){


  }
   //initialze -- getting our vector:
   Data(vector<Sortable*> v) { //we are gonna decalre a vector constructor of data class
         list = v; 
   }

   //Setters -- outputting our values:

  void add(Sortable* number){ // the function that allows us to add numbers of Sortable type into the vector
 
    list.push_back(number); // putting something into my vector

  } //end of void add

  //https://www.geeksforgeeks.org/how-to-sort-a-vector-in-descending-order-using-stl-in-c/ -- on printing the elements of a vector:

  void print(){ //takes no inputs

    for (int i =0; i< list.size(); i++)
      cout << list[i] << " " ; // printing out every element of the array within the vector list
      cout << endl; //printing out an endline after each list of numbers is printed.

  } // end of print

  void sort(){ //sorting method to sort numbers into descending order --collaborated with Ivan Padilla on

        int j = 0;
        Sortable* temp = 0;

        for (int i = 1; i < list.size(); i++){  
                temp = list[i];  
                j = i - 1;  //iterating down (descending)

                while (j >= 0 && list[j] > temp){  
                    list[j + 1] = list[j];  
                    j = j - 1;  //iterating down (descending)
                }  

                list[j + 1] = temp;  
            }

            /* I had a very basic sorting method hashed out but it wouldnt work for the purposes of this project. 
              for(int i = list.size() - 1; i >= 0; i--){

             cout << list[i] << " ";
            cout << endl;
            }

            */

      } //end of sort 
};
