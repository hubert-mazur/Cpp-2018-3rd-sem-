#include "StudentsList.h"
int StudentsList::counter = 0;
StudentsList::StudentsList(std::string string_header)
{
	this->string_header = string_header;
}
void StudentsList::PrintInfo(void)
{
	std::cout << "Students List: " << string_header << std::endl;
}
void StudentsList::PrintAll(void)
{
	Student *temp;
	temp = first;
	int i = 1;
	while (temp != NULL)
	{
		std::cout << "Student " << i << ": " << temp->name << ", " << temp->second_name << std::endl;
		temp = temp->next;
		i++;
	}
}
void StudentsList::AddStudent(Student *object)
{
	if (counter == 0)
	{
		first = object;
		counter++;
	}
	else
	{
		Student *temp;
		temp = first;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = object;
		counter++;
	}
}
StudentsList::~StudentsList()
{
	Student *temp, *temp2;
	temp = first;
	while (temp != NULL)
	{
		temp2 = temp->next;
		delete temp;
		temp = temp2;
	}
}
