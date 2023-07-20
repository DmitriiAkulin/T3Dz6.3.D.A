#pragma once
#include "Triangle.h"

class EquilateralTriangle : public Triangle {
protected:
    const int Side = c = b = a = 30;
    const int Angle = C = B = A = 60;

    EquilateralTriangle(int a);
public:
    EquilateralTriangle();
};

