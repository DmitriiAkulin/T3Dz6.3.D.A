#pragma once
#include <string>
class Figure {
protected:
    int _side_count;//����� ������
    std::string  name;

    Figure(int _side_count);

public:
    Figure();
    int get_sides_count();    
    std::string get_name();
};