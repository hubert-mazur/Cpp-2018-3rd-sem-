#ifndef _FUN_H_
#define _FUN_H_
#include <cmath>
#include <iostream>
#include "Complex.h"
class Complex;
class Fun
{
  public:
    static double Modulo(Complex &object);
    static Complex Add(Complex &object1, Complex object2);
    static Complex Multiply(Complex object1, Complex object2);
};

#endif