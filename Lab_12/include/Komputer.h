#ifndef _KOMPUTER_H_
#define _KOMPUTER_H_
#include "Nadawca.h"
class Nadawca;
class Komputer : public Nadawca
{
  public:
    Komputer(char letter) : Nadawca(letter){};
    std::string Get_name(void) const
    {
        return name;
    }

  private:
    std::string name = "komputer";
};
#endif