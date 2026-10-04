#include <iostream>
#include "function.h"
#include "My_class.h"

int main()
{
    // Question 1
    std::cout << "Hello World !" << std::endl;

    // Questions 2 et 3
    print_string("Hello World !");

    // Question 4
    My_class object1;
    My_class object2("Hello World !");

    object1.print_my_element();
    object2.print_my_element();

    return 0;
}