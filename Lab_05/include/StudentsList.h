#ifndef _STUDENTSLIST_H_
#define _STUDENTSLIST_H_
#include "Student.h"
#include <iostream>
class StudentsList
{
  public:
	StudentsList(std::string string_header);
	void PrintInfo(void);
	void AddStudent(Student *object);
	void PrintAll(void);
	~StudentsList();
	void Delete_list(void);

  private:
	Student *first;
	std::string string_header;
	static int counter;
};
#endif
