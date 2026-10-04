#ifndef COMPLEX2D_H
#define COMPLEX2D_H

class Complex2D
{
private:
    double real;
    double imaginary;

public:
    // Constructeurs
    Complex2D();
    Complex2D(double value);
    Complex2D(double real_value, double imaginary_value);
    Complex2D(const Complex2D& other);

    // Getters
    double getReal() const;
    double getImaginary() const;

    // Setters
    void setReal(double value);
    void setImaginary(double value);

    // Operateurs
    Complex2D operator+(const Complex2D& other) const;
    Complex2D operator-(const Complex2D& other) const;
    Complex2D operator*(const Complex2D& other) const;
    Complex2D operator/(const Complex2D& other) const;

    bool operator<(const Complex2D& other) const;
    bool operator>(const Complex2D& other) const;
};

#endif