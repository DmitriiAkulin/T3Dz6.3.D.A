#pragma once
#include "Parallelogram.h"

class _Rectangle : public Parallelogram {
protected:
    const int Angle = A = B = C = D = 90;
    const int a_c = c = a = 10;
    const int b_d = d = b = 20;
    _Rectangle(int a, int b, int A);
public:
    _Rectangle();
};