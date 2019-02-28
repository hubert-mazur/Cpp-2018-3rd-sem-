#include "Student.h"
int Student::counter = 0;
Student::Student(std::string first_name, std::string second_name)
{
	name = first_name;
	this->second_name = second_name;
	counter++;
	next = NULL;
}
void Student::Print(void)
{
	std::cout << "Student " << counter << ": " << name << ", " << second_name << std::endl;
}
