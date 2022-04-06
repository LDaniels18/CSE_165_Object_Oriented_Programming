#pragma once
#include <iostream>
#include "Vec.h"

using namespace std; 

//## Collaborated with Ivan Padilla: 

class Mat{
public:
static Mat Identity; //3x3 matix where we have 1s in diagonals
float a;
float b;
float c;
float d; // our square 3x3 matrix

  Mat(){
    a = 0;
    b = 0;
    c = 0;
    d = 0;
  }


  Mat(float a1, float b1, float c1, float d1){
      a = a1;
      b = b1;
      c = c1;
      d = d1;
  }


Mat operator -(const Mat &matrixSub)const;
Mat operator +(const Mat &matrixAdd)const;

  
};

 Mat Mat::Identity = Mat(1.0, 0.0 ,0.0, 1.0); 


 Mat operator*(const float scalar, const Mat &A){
      return Mat(scalar*A.a, scalar* A.b, scalar*A.c, scalar*A.d);
  }

   Mat operator*(const Mat &A, const Mat &B){ //needs to be const if not error will occur needs to be recognized as a mat 
      return Mat(A.a * B.a, A.b * B.b, A.c *B.c, A.d* B.d);
  }

  
  Vec operator*(const Mat &A, const Vec &vec ){
      return Vec(vec.x *A.a + vec.x *A.b, vec.y * A.c + vec.y *A.d); //Columns X Rows
  }


   Mat Mat::operator-(const Mat &A)const{
      return Mat(a -A.a, b -A.b, c -A.c, d- A.d);
  }

   Mat Mat::operator+(const Mat &A)const{
      return Mat(a + A.a, b + A.b, c +A.c, d+ A.d);
  }