#ifndef _GRADEBOOK_H_
#define _GRADEBOOK_H_
#include "Grade.h"
#include <iostream>

class GradeBook
{
  public:
    ~GradeBook();
    GradeBook();
    void insert(Grade const *object);
    void addGrade(float grade);
    void print(void);

  private:
    int _numberOfElements;
    float *_gradeArray;
    int *_gradeIDarray;
};
#endif