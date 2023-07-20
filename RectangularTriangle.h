#pragma once
#include "Triangle.h"
class RectangularTriangle : public Triangle {
protected:
    const int C_ = C = 90;    

    RectangularTriangle(int a, int b, int c, int A, int B);



public:

    RectangularTriangle();
};