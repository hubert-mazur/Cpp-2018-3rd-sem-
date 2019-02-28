#include "Complex.h"
Complex::Complex(double first_value, double second_value)
{
    _Re = first_value;
    _Im = second_value;
}
Complex::Complex(int value)
{
    _Re = value;
    _Im = 0;
}
void Complex::Print(void) const
{
    std::cout << _Re << "+i" << _Im << std::endl;
}
int Complex::Im(void) const
{
    return _Im;
}