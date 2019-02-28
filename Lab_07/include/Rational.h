#ifndef RATIONAL_H_
#define RATIONAL_H_
#include "Fun.h"
#include <iostream>
class Rational
{
    friend class Funn;

  public:
    void Print(void) const;
    Rational(int first_value, int second_value);
    int get_licznik(void) const
    {
        return licznik;
    }
    int get_mianownik(void) const
    {
        return mianownik;
    }
    Rational(int value);
    operator double() const
    {
        return (double)((double)licznik / (double)mianownik);
    }

  private:
    int licznik;
    int mianownik;
};
#endif