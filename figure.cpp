#include "figure.h"

 Figure::Figure(int _side_count) : _side_count(_side_count) {}//����������� � ����������

 Figure::Figure() :Figure(0) {}//�����������


 int Figure::get_sides_count() { return _side_count; }//����� ��� ������� � ���� _side_count      
 std::string Figure::get_name() { return name; }//����� ��� ������� � ���� name
