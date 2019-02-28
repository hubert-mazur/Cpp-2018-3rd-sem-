#ifndef _NADAWCA_H_
#define _NADAWCA_H_
#include <string>
class Nadawca
{
  public:
    Nadawca(char letter) : _letter(letter){};
    virtual std::string Get_name(void) const = 0;
    char Get_letter(void)
    {
        return _letter;
    }

  protected:
    char _letter;
};
#endif