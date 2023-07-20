#pragma once
#include "figure.h"

class Triangle : public Figure{
protected:
    int a, b, c;//����� ������
    int A, B, C;//�������� �����     
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