#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

#include <string.h>

class MyString
{
  public:
    MyString friend operator*(int, const MyString &object);
    MyString(const char *str);
    void Print(void) const;
    int operator==(MyString const &object) const;
    MyString operator+(const MyString &object) const;
    void operator=(MyString const &object);
    char &operator[](int index) const;
    MyString operator*(int)const;
    ~MyString(void);

  private:
    char *_my_string;
};
MyString operator*(int, const MyString &object);
#endif
