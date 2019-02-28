#include "Fun.h"
static Rational hello(0, 1);
static int count = 0;
Rational Fun::Add(const Rational object1, const Rational object2)
{
    if (object1.get_mianownik() == object2.get_mianownik())
        return Rational(object1.get_licznik() + object2.get_licznik(), object1.get_mianownik());
    else
        return Rational(object1.get_licznik() * object2.get_mianownik() + object2.get_licznik() * object1.get_mianownik(), object1.get_mianownik() * object2.get_mianownik());
}
Rational Fun::Multiply(Rational object1, Rational object2)
{
    return Rational(object1.get_licznik() * object2.get_licznik(), object1.get_mianownik() * object2.get_mianownik());
}
Rational Fun::Divide(Rational object1, Rational object2)
{
    return Multiply(object1, Rational(object2.get_mianownik(), object2.get_licznik()));
}
void Fun::Average(Rational object)
{
    hello = Fun::Add(hello, object);
    count++;
}
Rational Fun::Average(void)
{
    hello = Fun::Divide(hello, count);
    return hello;
}
