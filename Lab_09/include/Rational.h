#ifndef _RATIONAL_H_
#define _RATIONAL_H_
#include <iostream>
#include "Complex.h"
class Complex;
class Rational
{
  public:
    //friend class Complex;
    Rational(int first_value = 0, int second_value = 0)
    {
        licznik = first_value;
        mianownik = second_value;
    }
    int Get_licznik(void)
    {
        return licznik;
    }
    int Get_mianownik(void)
    {
        return mianownik;
    }
    void Print(void) const;

  private:
    int licznik;
    int mianownik;
};
#endif