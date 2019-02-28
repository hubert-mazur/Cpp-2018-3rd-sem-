#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include "Rational.h"
#include <iostream>
#include <cmath>
class Rational;
class Complex
{

  public:
    void Print(void) const;
    double Im(void)
    {
        return _Im;
    }
    static double Modulo(Complex &a);
    Complex(double first_value = 0, double second_value = 0) : _Re(first_value), _Im(second_value){};
    Complex operator+(Complex object)
    {
        return Complex(_Re + object._Re, _Im + object._Im);
    }
    Complex operator+(double value)
    {
        return Complex(_Re + value, _Im);
    }
    Complex operator*(Rational object);
    explicit operator double()
    {
        return _Re;
    }

  private:
    double _Re;
    double _Im;
};
#endif