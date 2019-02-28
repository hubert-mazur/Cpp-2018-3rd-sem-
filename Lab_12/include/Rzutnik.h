#ifndef RZUTNIK_H_
#define _RZUTNIK_H_
#include "Odbiorca.h"
class Rzutnik : public Odbiorca
{
  public:
    Rzutnik(int szer, int wys);
    void Wyswietl(Nadawca *) const;
};
#endif