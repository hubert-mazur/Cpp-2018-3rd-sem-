#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <iostream>
class Student
{
	friend class StudentsList;

  public:
	void Print(void);
	Student(std::string first_name, std::string second_name);

  private:
	std::string name;
	std::string second_name;
	static int counter;
	Student *next;
};
#endif