#include <iostream>
#include "My_class.h"

My_class::My_class()
    : my_element("")
{
}

My_class::My_class(std::string element)
    : my_element(element)
{
}

void My_class::print_my_element()
{
    std::cout << my_element << std::endl;
}