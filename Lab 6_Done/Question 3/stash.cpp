/*
Create a Stash class specifically for storing Rect objects and call it RectStash. Add
a default constructor and a destructor to correctly initialize your RectStash class. Then write a
program that will read several lines as input. Each line will contain 4 floats defining a 2D rectangle
in the Rect format described above. Read the rectangles adding them to a RectStash object. Stop
reading rectangles when your program loads 4 negative float values. After this point you will start
reading a series of 2D points, and for each 2D point you will print the classification of each point in
respect to all previously read rectangles. The classification should print “in” or “out” according to its
result. Stop your program when you read vector (-99,-99). You can reuse your Rect.h and Vec.h files.
*/

#include <vector>
#include <iostream>
#include "Stash.h"

int main()
{

    //reading several lines: of our coordinate vectors (4 total):

    //upper left corner position has a x and y -- straight up taken from my rect.h file:
    float x = 0.0f;
    float y = 0.0f;

    //height and width
    float width = 0.0f;
    float height = 0.0f;

    //for the character to end the loop
    char letter;

    cout << "Entering the 4 variables: " << endl;

    cout << "Enter an x: " << endl;

    cin >> x;

    cout << "Enter an y: " << endl;

    cin >> y;

    cout << "Enter an width: " << endl;

    cin >> width;

    cout << "Enter an height: " << endl;

    cin >> height;

    RectStash object; //an object member of the RectStash class:

    while (true)
    {

        //to prevent inputting negative values:

        if (x < 0 && y < 0 && width < 0 && height < 0)
        { // leave this while loop if all inputs are negative

            break; //will stop the loop

        } //end of the if

        Rect Rectangle(x, y, width, height); // creation of a new rectangle

        object.rectangleVector.push_back(Rectangle); //putting the new values into the rectangle vector in the stash...

        // reads in another 4 values

        cout << "Reading in 4 more values" << endl;

        cout << "Enter an x: " << endl;

        cin >> x;

        cout << "Enter an y: " << endl;

        cin >> y;

        cout << "Enter an width: " << endl;

        cin >> width;

        cout << "Enter an height: " << endl;

        cin >> height;
        
        cout << "Continue entering values to create our rectangle:" << endl;
        cout << "enter a char to quit... enter q or just enter any other character" << endl;
        cin >> letter;

        if (letter == 'q')
        {
            cout << "you have ended the loop" << endl;
            break;

        } //end of the if 
    }

    // reads in two last coordinate values
    cout << "Enter an x: " << endl;

    cin >> x;

    cout << "Enter an y: " << endl;

    cin >> y;

    while (true) // true as long as we dont hit (-99,-99)
    {
        if (x == -99 && y == -99) //becuase we check for (-99,-99) then break if its true:
        {
            break; //(-99,-99) breaks loop
        }

        Vec newCoordinates(x, y); //we just added new coordinates to our main vector

        for (int i = 0; i < object.rectangleVector.size(); i++)
        { //we check the stash containing the

            //the classification of in and out:

            if (object.rectangleVector[i].contains(newCoordinates))
            { // are we inside our rectangles boundary values

                cout << "in " << endl; //coordinates are found within the rectangle
            }
            else
            {

                cout << "out " << endl; //coordinates are found outside the rectangle
            }
        }

        cout << "Continue checking coordinates" << endl;
        cout << "enter a char to quit... enter q or just enter any other character" << endl;
        cin >> letter;

        if (letter == 'q')
        {
            cout << "you have ended the loop" << endl;
            break;

        } //end of the if 

        else
        {

            cout << "Enter an x: " << endl;

            cin >> x;

            cout << "Enter an y: " << endl;

            cin >> y;

        } //end of else
    }

    return 0; //ending the loop

} //end of main