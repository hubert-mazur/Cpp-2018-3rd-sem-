#ifndef _ODBIORCA_H_
#define _ODBIORCA_H_
#include "Nadawca.h"
#include <iostream>
class Odbiorca
{
  public:
    Odbiorca(int szer, int wys) : _szer(szer), _wys(wys){};
    virtual void Wyswietl(Nadawca *object) const = 0;

  protected:
    int _szer;
    int _wys;
};
#endif
