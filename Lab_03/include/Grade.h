#ifndef _GRADE_H_
#define _GRADE_H_
#include <iostream>
class Grade
{
  public:
    Grade(double);
    void print(void);
    ~Grade();
    float get_grade(void) const;

  private:
    float _grade;
    int _gradeID;
};
#endif
