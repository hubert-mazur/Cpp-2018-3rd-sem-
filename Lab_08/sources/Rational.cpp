#include "Rational.h"
Rational::operator Complex() const
{
    return Complex((double)_licznik / _mianownik, 0);
}