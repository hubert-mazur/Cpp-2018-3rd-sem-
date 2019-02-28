#ifndef FUN_H_
#define FUN_H_
#include "Rational.h"
class Rational;
namespace Fun
{
Rational Add(const Rational object1, const Rational object2);
Rational Multiply(Rational object1, Rational object2);
Rational Divide(Rational object1, Rational object2);
void Average(Rational object);
class Funn
{
    friend void Fun::Average(Rational object);

  public:
    operator int() const;

  private:
};

Rational Average(void);
} // namespace Fun

#endif