#include "Triangle.h"

   Triangle::Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C)
      {}


    Triangle::Triangle() :Triangle(a = 10, b = 20, c = 30, A = 50, B = 60, C = 70) 
       { name = "треугольник:"; _side_count = 3; }

    int Triangle::get_a() { return a; }
    int Triangle::get_b() { return b; }
    int Triangle::get_c() { return c; }
    int Triangle::get_C() { return C; }
    int Triangle::get_B() { return B; }
    int Triangle::get_A() { return A; }