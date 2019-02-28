#include "MyString.h"

MyString::MyString(const char *str)
{
    _my_string = new char[strlen(str) + 1];
    strcpy(_my_string, str);
}
int MyString::operator==(MyString const &object) const
{
    if (strcmp(_my_string, object._my_string) == 0)
        return 1;
    else
        return 0;
}

char &MyString::operator[](int index) const
{
    return *(_my_string + index);
}
void MyString::operator=(MyString const &object)
{
    unsigned int count;
    count = strlen(object._my_string);
    if (count == strlen(_my_string))
    {
        strcpy(_my_string, object._my_string);
    }
    else
    {
        delete[] _my_string;
        _my_string = new char[count + 1];
        strcpy(_my_string, object._my_string);
    }
}
MyString MyString::operator+(const MyString &object) const
{
    int count = strlen(object._my_string) + strlen(_my_string);
    char *temp = new char[count + 1];
    strcpy(temp, _my_string);
    strcat(temp, object._my_string);
    MyString tmp(temp);
    delete[] temp;
    return tmp;
}
void MyString::Print(void) const
{
    std::cout << _my_string << std::endl;
}
MyString operator*(int multiplier, const MyString &object)
{
    char *temp;
    temp = new char[strlen(object._my_string) * multiplier + 1];
    strcpy(temp, object._my_string);
    for (int i = 0; i < multiplier - 1; i++)
        strcat(temp, object._my_string);
    MyString tmp(temp);
    delete[] temp;
    return tmp;
}
MyString MyString::operator*(int multiplier) const
{
    char *temp;
    temp = new char[strlen(_my_string) * multiplier + 1];
    strcpy(temp, _my_string);
    for (int i = 0; i < multiplier - 1; i++)
        strcat(temp, _my_string);
    MyString tmp(temp);
    delete[] temp;
    return tmp;
}
MyString::~MyString(void)
{
    delete[] _my_string;
}