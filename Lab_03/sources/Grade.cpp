#include "Grade.h"
Grade::Grade(double x)
{
    _grade = x;
    _gradeID = 1;
}
Grade::~Grade()
{
}
float Grade::get_grade(void) const
{
    return _grade;
}
void Grade::print(void)
{
    std::cout << "Grade ID=" << _gradeID << " value=" << _grade << std::endl;
}