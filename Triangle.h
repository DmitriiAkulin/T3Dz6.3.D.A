#pragma once
#include "figure.h"

class Triangle : public Figure{
protected:
    int a, b, c;//длины сторон
    int A, B, C;//величины углов     
    Triangle(int a, int b, int c, int A, int B, int C);


public:
    Triangle();

    int get_a();
    int get_b();
    int get_c();
    int get_C();
    int get_B();
    int get_A();
};