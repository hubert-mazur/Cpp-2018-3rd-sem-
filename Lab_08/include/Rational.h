#ifndef _RATIONAL_H_
#define _RATIONAL_H_
#include "Complex.h"
#include "Fun.h"
class Complex;
class Rational
{
  public:
    //friend Complex;
    void Print(void)
    {
        std::cout << _licznik << "/" << _mianownik << std::endl;
    }
    operator Complex() const;

    Rational(int first_value, int second_value)
    {
        _licznik = first_value;
        _mianownik = second_value;
    }

  private:
    int _licznik;
    int _mianownik;
};

#endif