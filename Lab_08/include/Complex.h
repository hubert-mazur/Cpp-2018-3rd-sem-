#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <iostream>
#include "Fun.h"
#include "Rational.h"
class Rational;
class Complex
{
    friend Rational;

  public:
    Complex(double first_value, double second_value);
    Complex(int value);
    void Print(void) const;
    int Im(void) const;
    operator double() const
    {
        return _Re;
    }
    double get_Re(void)
    {
        return _Re;
    }
    double get_Im(void)
    {
        return _Im;
    }

  private:
    double _Re;
    double _Im;
};
#endif