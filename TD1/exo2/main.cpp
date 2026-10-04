#include <iostream>
#include "Complex2D.h"

int main()
{
    Complex2D a(3, 4);
    Complex2D b(1, 2);

    std::cout << "a = "
              << a.getReal() << " + "
              << a.getImaginary() << "i"
              << std::endl;

    std::cout << "b = "
              << b.getReal() << " + "
              << b.getImaginary() << "i"
              << std::endl;


    // Addition
    Complex2D addition = a + b;

    std::cout << "a + b = "
              << addition.getReal() << " + "
              << addition.getImaginary() << "i"
              << std::endl;


    // Soustraction
    Complex2D subtraction = a - b;

    std::cout << "a - b = "
              << subtraction.getReal() << " + "
              << subtraction.getImaginary() << "i"
              << std::endl;


    // Multiplication
    Complex2D multiplication = a * b;

    std::cout << "a * b = "
              << multiplication.getReal() << " + "
              << multiplication.getImaginary() << "i"
              << std::endl;


    // Division
    Complex2D division = a / b;

    std::cout << "a / b = "
              << division.getReal() << " + "
              << division.getImaginary() << "i"
              << std::endl;


    // Constructeur avec une seule valeur
    Complex2D c(5);

    std::cout << "c = "
              << c.getReal() << " + "
              << c.getImaginary() << "i"
              << std::endl;


    // Constructeur par copie
    Complex2D d(a);

    std::cout << "d (copie de a) = "
              << d.getReal() << " + "
              << d.getImaginary() << "i"
              << std::endl;


    // Setters
    d.setReal(10);
    d.setImaginary(20);

    std::cout << "d apres modification = "
              << d.getReal() << " + "
              << d.getImaginary() << "i"
              << std::endl;


    // Comparaisons
    std::cout << "a > b : "
              << (a > b ? "true" : "false")
              << std::endl;

    std::cout << "a < b : "
              << (a < b ? "true" : "false")
              << std::endl;

    return 0;
}