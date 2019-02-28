#include "Fun.h"
double Fun::Modulo(Complex &object)
{
    return sqrt(object.get_Re() * object.get_Re() + object.get_Im() * object.get_Im());
}
Complex Fun::Add(Complex &object1, Complex object2)
{
    return Complex(object1.get_Re() + object2.get_Re(), object1.get_Im() + object2.get_Im());
}
Complex Fun::Multiply(Complex object1, Complex object2)
{
    return Complex(object1.get_Re() * object2.get_Re() - object1.get_Im() * object2.get_Im(), object1.get_Re() * object2.get_Im() + object1.get_Im() * object2.get_Re());
}