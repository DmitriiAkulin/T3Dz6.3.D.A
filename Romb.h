#pragma once
#include "Parallelogram.h"

class Romb : public Parallelogram {
protected:
    const int Side = d = c = b = a = 30;
    const int A_C = C = A = 30;
    const int B_D = D = B = 40;


    Romb(int a, int A, int B);

public:
    Romb();
};