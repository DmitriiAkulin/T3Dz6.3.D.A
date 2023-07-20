#include "Quadrangle.h"


Quadrangle::Quadrangle(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) : a(_a), b(_b), c(_c), d(_d),
                                                                                         A(_A), B(_B), C(_C),D(_D) {}


Quadrangle::Quadrangle() :Quadrangle(a = 10, b = 20, c = 30, d = 40, A = 50, B = 60, C = 70, D = 80)
    {
        name = "четырехугольник:"; _side_count = 4;
    }
    int Quadrangle::get_a() { return a; }
    int Quadrangle::get_b() { return b; }
    int Quadrangle::get_c() { return c; }
    int Quadrangle::get_d() { return d; }
    int Quadrangle::get_C() { return C; }
    int Quadrangle::get_B() { return B; }
    int Quadrangle::get_A() { return A; }
    int Quadrangle::get_D() { return D; }