#include "figure.h"

 Figure::Figure(int _side_count) : _side_count(_side_count) {}//конструктор с параметром

 Figure::Figure() :Figure(0) {}//конструктор


 int Figure::get_sides_count() { return _side_count; }//метод для доступа к полю _side_count      
 std::string Figure::get_name() { return name; }//метод для доступа к полю name
