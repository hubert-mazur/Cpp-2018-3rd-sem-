#ifndef _ODTWACZACZDVD_H_
#define _ODTWACZACZDVD_H_
#include "Nadawca.h"

class OdtwarzaczDVD : public Nadawca
{
  public:
    OdtwarzaczDVD(char letter) : Nadawca(letter){};
    std::string Get_name(void) const
    {
        return name;
    }

  private:
    std::string name = "DVD";
};
#endif