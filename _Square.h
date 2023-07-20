#pragma once
#include "_Rectangle.h"
class _Square : public _Rectangle {
protected:
    const int Side = d = c = b = a = 20;
    const int Angle = A = B = C = D = 90;

    _Square(int a, int A);

public:
    _Square();
};