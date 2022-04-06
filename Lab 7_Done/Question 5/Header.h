#pragma once

#include <iostream>
#include 



/*

You are required to complete the following tasks:
- Create a AppWindow class that will contain as member a rectangle class AppRect defining its position and size. AppWindow will have the following two constructors:
! Constructor receives the window area size. 

AppWindow ( int x, int y, int w, int h );
AppWindow ( const AppRect& r );

- Write a method to retrieve the rectangle:
const AppRect& AppWindow::rect();

- Write the resize() virtual method as described below. Every time this method is called your implementation is supposed to change the coordinates of the internal rectangle of the window.
! Method resize will be called by the system every time the window is resized 
virtual void AppWindow::resize ( int w, int h );

*/

using namespace std;

class AppRect{
  public:
  int x, y, w, h;
    
  AppRect(int X, int Y, int width, int height){
    x = X ;
    y = Y ;
    w= width ;
    h = height;
  }
};


class AppWindow{
  protected:
    AppRect* Rect; //object pointer is defined, will be used for accessing rectangle parameters in APPrect
    AppRect* test;
  public:

    AppWindow(){
    Rect = new AppRect(0, 0, 0, 0);
    test =  new AppRect(0, 0, 0, 0);
    }

    AppWindow(int x, int y, int w, int h){
    Rect = new AppRect(x, y, w, h);
    }

    AppWindow(const AppRect& r){
    Rect = new AppRect(r.x, r.y, r.w, r.h); //set object pointer
    }

    const AppRect& rect(){ //withinclass APPWINDOW const AppRect& AppWindow::rect();

    //return *test; // return's a rectangle with all zeros we are accessing AppRect class
    return *Rect; //
    }

    virtual void resize(int newWidth, int newHeight){
    Rect->w = newWidth; //changing the interior rectangle
    Rect->h = newHeight;
    }

};

/*Write now two classes deriving AppWindow: CircleWin, and RectWin. 
These classes will have correct constructors as needed and will 
override the resize method such that:CSE-165-Lab 7
100 Points
- CircleWin will get the minimum dimension (among w and h) and will 
print it like this: "radius: <min>", where <min> is the minimum 
dimension;
- RectWin will print the area like this: "area: <area>"*/


class CircleWin : public AppWindow{
  private:
    double radius;
  public:

  //getter 
    CircleWin(int X, int Y, int width, int height){
    Rect->x = X;//borrow variables from rect's x,y,width,heght
    Rect->y = Y;
    Rect->w = width;
    Rect->h = height;
    
      if(width < height){
        radius  = width;
      }
      else{
        radius = height;
      }
    }

    CircleWin(const AppRect& r){ //from line 13 of Virtualmethods.cpp we intake 1 parameter and we get help from rect
      Rect->x = r.x;
      Rect->y = r.y;
      Rect->w = r.w;
      Rect->h = r.h;

        if(r.w < r.h){ //if width is less then hieght print theminimum dimension
          radius = r.w; 
        }
        else{ 
          radius = r.h;
        }
    }

    virtual void resize(int width, int height){
    if (width < height) { // we want minimal resizeircleWin will get the minimum dimension (among w and h) and will print it like this: "radius: <min>", where <min> is the minimum dimension;
      radius = width;
      }
    else{ 
       radius = height; 
       }
    cout << "radius: " << radius << endl;
    }

};

class RectWin : public AppWindow{//deriving AppWindow: CircleWin, and RectWin.  -- Ivan Padilla 
  
  double area;
  public:

  //getter
    RectWin(int X, int Y, int width, int height){
    Rect->x = X;
    Rect->y = Y;
    Rect->w = width;
    Rect->h = height;
    area = width*height;
    }

    RectWin(const AppRect& r){ //we intake 1 parameter and we get help from rect similar to what Circle WIN is doing
    Rect->x = r.x;
    Rect->y = r.y;
    Rect->w = r.w;
    Rect->h = r.h;
    area = r.w*r.h;
    }

    virtual void resize(int width, int height){ // based on minimum 
    Rect->w = width;
    Rect->h = height;
    area = width*height;
    cout << "area: " << area << endl;
    }
};
