#include "Complex.h"
void Complex::Print(void) const
{
    std::cout << _Re << "+i" << _Im << std::endl;
}
Complex Complex::operator*(Rational object)
{
    return Complex(_Re * ((double)((double)object.Get_licznik() / object.Get_mianownik())), _Im * ((double)object.Get_licznik() / object.Get_mianownik()));
}
double Complex::Modulo(Complex &a)
{
    return (double)(sqrt(a._Re * a._Re + a._Im * a._Im));
}