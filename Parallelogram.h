#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
protected:
    int a_c = c = a = 20;
    const int b_d = d = b = 30;
    const int A_C = C = A = 30;
    const int B_D = D = B = 40;

    Parallelogram(int a, int b, int A, int B);
public:
    Parallelogram();
};