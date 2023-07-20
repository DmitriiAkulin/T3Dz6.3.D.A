// T3Dz6.3.D.A

#include <iostream>

#include "figure.h"

#include "Triangle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

#include "Quadrangle.h"
#include "Parallelogram.h"
#include "_Rectangle.h"
#include "_Square.h"
#include"Romb.h"


using std::cout;
using std::endl;
using std::string;

//прототипы функции печати
void Print_Info(Triangle*);
void Print_Info(Quadrangle* figure);

int main()
{
    setlocale(LC_ALL, "rus");

    //Figure figure;  cout << figure.get_name() << figure.get_sides_count() << std::endl;

    Triangle triangle; cout << triangle.get_name() << /*"Количество сторон: " << triangle.get_sides_count() <<*/endl;
    Print_Info(&triangle);

    RectangularTriangle rec_triangle; cout << rec_triangle.get_name() << endl;
    Print_Info(&rec_triangle);

    IsoscelesTriangle iso_triangle; cout << iso_triangle.get_name() << endl;
    Print_Info(&iso_triangle);

    EquilateralTriangle equi_triangle; cout << equi_triangle.get_name() << endl;
    Print_Info(&equi_triangle);

    Quadrangle quadrangle; cout << quadrangle.get_name() <</* "Количество сторон: " << quadrangle.get_sides_count() <<*/endl;
    Print_Info(&quadrangle);

    _Rectangle rectangle; cout << rectangle.get_name() << endl;
    Print_Info(&rectangle);

    _Square squar; cout << squar.get_name() << endl;
    Print_Info(&squar);

    Parallelogram parall; cout << parall.get_name() << endl;
    Print_Info(&parall);

    Romb romb; cout << romb.get_name() << endl;
    Print_Info(&romb);

    return 0;
}


//функции, реализация
void Print_Info(Triangle* figure) {
    cout << "Стороны: " << "а=" << (*figure).get_a() << " b=" << figure->get_b() << " c="
        << figure->get_c() << endl << "Углы:    " << "A=" << figure->get_A() << " B=" << figure->get_B() << " C=" << figure->get_C()
        << endl << endl;
}

void Print_Info(Quadrangle* figure) {
    cout << "Стороны: " << "а=" << (*figure).get_a() << " b=" << figure->get_b() << " c="
        << figure->get_c() << " d=" << figure->get_d() << endl << "Углы:    " << "A=" << figure->get_A()
        << " B=" << figure->get_B() << " C=" << figure->get_C() << " D="
        << figure->get_D() << endl << endl;
}