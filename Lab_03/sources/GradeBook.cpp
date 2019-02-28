#include "GradeBook.h"

GradeBook::~GradeBook()
{
    delete[] _gradeArray;
    delete[] _gradeIDarray;
}
GradeBook::GradeBook()
{
    _numberOfElements = 0;
}
void GradeBook::insert(Grade const *object)
{
    if (_numberOfElements == 0)
    {
        _gradeArray = new float[_numberOfElements + 1];
        _gradeIDarray = new int[_numberOfElements + 1];
        *_gradeArray = object->get_grade();
        *_gradeIDarray = _numberOfElements + 1;
        _numberOfElements++;
        delete object;
    }
    else
    {
        float *temp;
        int *tempID;
        temp = new float[_numberOfElements + 1];
        tempID = new int[_numberOfElements + 1];
        for (int i = 0; i < _numberOfElements; i++)
        {
            temp[i] = _gradeArray[i];
            tempID[i] = _gradeIDarray[i];
        }
        delete[] _gradeArray;
        delete[] _gradeIDarray;
        _gradeArray = temp;
        _gradeIDarray = tempID;
        _gradeArray[_numberOfElements] = object->get_grade();
        _gradeIDarray[_numberOfElements] = _numberOfElements + 1;
        _numberOfElements += 1;
        delete object;
    }
}
void GradeBook::addGrade(float grade)
{
    if (_numberOfElements == 0)
    {
        _gradeArray = new float[_numberOfElements + 1];
        _gradeIDarray = new int[_numberOfElements + 1];
        *_gradeArray = grade;
        *_gradeIDarray = _numberOfElements + 1;
        _numberOfElements++;
    }
    else
    {
        float *temp;
        int *tempID;
        temp = new float[_numberOfElements + 1];
        tempID = new int[_numberOfElements + 1];
        for (int i = 0; i < _numberOfElements; i++)
        {
            temp[i] = _gradeArray[i];
            tempID[i] = _gradeIDarray[i];
        }
        delete[] _gradeArray;
        delete[] _gradeIDarray;
        _gradeArray = temp;
        _gradeIDarray = tempID;
        _gradeArray[_numberOfElements] = grade;
        _gradeIDarray[_numberOfElements] = _numberOfElements + 1;
        _numberOfElements += 1;
    }
}
void GradeBook::print(void)
{
    std::cout << "Grades in the book:" << std::endl;
    for (int i = 0; i < _numberOfElements; i++)
    {
        std::cout << "Grade ID=" << _gradeIDarray[i] << " value=" << _gradeArray[i] << std::endl;
    }
    std::cout << std::endl;
}