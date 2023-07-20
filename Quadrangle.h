#pragma once
#include "figure.h"

class Quadrangle : public Figure {
protected:
    int a, b, c, d;//длины сторон
    int A, B, C, D;//величины углов     
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);


public:
    Quadrangle();

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_C();
    int get_B();
    int get_A();
    int get_D();
};