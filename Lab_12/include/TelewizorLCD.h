#ifndef TELEWIZORLCD_H_
#define TELEWIZORLCD_H_
#include "Odbiorca.h"
class TelewizorLCD : public Odbiorca
{
  public:
    TelewizorLCD(int szer, int wys);
    void Wyswietl(Nadawca *) const;
};
#endif