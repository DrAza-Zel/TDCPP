#include "Complex2D.h"
#include <cmath>

// Constructeur par defaut
Complex2D::Complex2D()
    : real(0.0), imaginary(0.0)
{
}

// Constructeur avec une valeur pour reel et imaginaire
Complex2D::Complex2D(double value)
    : real(value), imaginary(value)
{
}

// Constructeur avec reel et imaginaire
Complex2D::Complex2D(double real_value, double imaginary_value)
    : real(real_value), imaginary(imaginary_value)
{
}

// Constructeur par copie
Complex2D::Complex2D(const Complex2D& other)
    : real(other.real), imaginary(other.imaginary)
{
}


// GETTERS

double Complex2D::getReal() const
{
    return real;
}

double Complex2D::getImaginary() const
{
    return imaginary;
}


// SETTERS

void Complex2D::setReal(double value)
{
    real = value;
}

void Complex2D::setImaginary(double value)
{
    imaginary = value;
}


// ADDITION

Complex2D Complex2D::operator+(const Complex2D& other) const
{
    return Complex2D(
        real + other.real,
        imaginary + other.imaginary
    );
}


// SOUSTRACTION

Complex2D Complex2D::operator-(const Complex2D& other) const
{
    return Complex2D(
        real - other.real,
        imaginary - other.imaginary
    );
}


// MULTIPLICATION

Complex2D Complex2D::operator*(const Complex2D& other) const
{
    double new_real =
        real * other.real - imaginary * other.imaginary;

    double new_imaginary =
        real * other.imaginary + imaginary * other.real;

    return Complex2D(new_real, new_imaginary);
}


// DIVISION

Complex2D Complex2D::operator/(const Complex2D& other) const
{
    double denominator =
        other.real * other.real +
        other.imaginary * other.imaginary;

    double new_real =
        (real * other.real +
         imaginary * other.imaginary)
        / denominator;

    double new_imaginary =
        (imaginary * other.real -
         real * other.imaginary)
        / denominator;

    return Complex2D(new_real, new_imaginary);
}


// COMPARAISON <
// comparaison selon le module du complexe

bool Complex2D::operator<(const Complex2D& other) const
{
    double module1 =
        std::sqrt(real * real + imaginary * imaginary);

    double module2 =
        std::sqrt(
            other.real * other.real +
            other.imaginary * other.imaginary
        );

    return module1 < module2;
}


// COMPARAISON >

bool Complex2D::operator>(const Complex2D& other) const
{
    double module1 =
        std::sqrt(real * real + imaginary * imaginary);

    double module2 =
        std::sqrt(
            other.real * other.real +
            other.imaginary * other.imaginary
        );

    return module1 > module2;
}