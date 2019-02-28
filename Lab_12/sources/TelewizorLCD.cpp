#include "TelewizorLCD.h"

void TelewizorLCD::Wyswietl(Nadawca *object) const
{
  std::cout << "Polaczono telewizor i " << object->Get_name() << std::endl;
  for (int i = 1; i < _szer; i++)
    std::cout << "-";
  std::cout << std::endl;
  for (int i = 0; i < _wys; i++)
  {
    for (int j = 0; j < _szer; j++)
      std::cout << object->Get_letter();
    std::cout << std::endl;
  }
  for (int i = 0; i < _szer; i++)
    std::cout << "-";
  std::cout << std::endl;
}
TelewizorLCD::TelewizorLCD(int szer, int wys) : Odbiorca(szer, wys){};
