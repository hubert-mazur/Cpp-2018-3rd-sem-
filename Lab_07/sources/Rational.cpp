#include "Rational.h"

void Rational::Print(void) const
{
    std::cout << licznik << "/" << mianownik << std::endl;
}
Rational::Rational(int first_value, int second_value)
{
    licznik = first_value;
    mianownik = second_value;
}
Rational::Rational(int value)
{
    licznik = value;
    mianownik = 1;
}
