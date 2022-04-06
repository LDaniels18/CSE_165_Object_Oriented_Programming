#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map> // to use the map;
#include <fstream>

using namespace std;

/*
Given a text file file.txt, print all the words with their corresponding count. You need to use STL’s unordered_map and simplemap.cpp file to achieve this task.
*/
void printFrequencies(const string &str) //gathering our count:
//For using unordered map: https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/
{
	

	//declaring an unordered map:
	unordered_map<string, int> fileMap; //an unordered map named file map; -- a container like a vector or array

	//for string stream -- https://www.geeksforgeeks.org/stringstream-c-applications/


	stringstream wordFile(str); //sstream allows us to represent a word from the file
	string word; //to store our words 
	int count = 0;

	//https://www.geeksforgeeks.org/stringstream-c-applications/ -- using our string stream and string cross reference:

	while(wordFile >> word){ //checking if the word in the file matches a word from the map: --">> = read something from the stringstream object,"

		//we want to increase the count of the word from the map, by utilizing its container properties:

		fileMap[word] = fileMap[word] + 1; //

	} // end of while

	 unordered_map<string, int>::iterator check; //declaring and defining an iterator named check.. to traverse our map:

    for (check = fileMap.begin(); check != fileMap.end(); check++) //this was literally all taken from https://www.geeksforgeeks.org/stringstream-c-applications/

        cout << "(" << check->first << "," << check->second << ")" << endl; 

		// type itr->first stores the key part  and
        // itr->second stroes the value part

}

int main(int argc, char** argv)
{

	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>())); //we have an iterator... to traverse the map to print out the individual words!

	printFrequencies(content); //function to print out our word frequencies:

	return 0;
}