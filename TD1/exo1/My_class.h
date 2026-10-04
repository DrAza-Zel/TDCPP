#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <string>

class My_class
{
private:
    std::string my_element;

public:
    My_class();
    My_class(std::string element);

    void print_my_element();
};

#endif