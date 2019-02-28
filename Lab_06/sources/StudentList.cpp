#include <StudentList.h>
void AddStudent(int *numberOfStudents, char ***nameList, char ***surnameList, int **yearlist, char *name, char *second_name, char *surname, int year)
{
    if (*numberOfStudents == 0) //case, just for one student
    {
        (*nameList) = new char *[1];
        int names_length = (int)strlen(name) + strlen(second_name) + 2; //setting necessary length of an array, including spaces and end of line character ('\0')
        *((*nameList)) = new char[names_length];                        //allocating memory for one student
        strcpy(*(*nameList), name);                                     //copying name
        strcat(*(*nameList), " ");                                      //adding space
        strcat(*(*nameList), second_name);                              //adding second name
        (*surnameList) = new char *[1];                                 //allocating memory for field surname for one student
        int surname_length = (int)strlen(surname) + 1;
        *((*surnameList)) = new char[surname_length];
        strcpy(*(*surnameList), surname);
        *numberOfStudents = *numberOfStudents + 1;
        (*yearlist) = new int[*numberOfStudents + 1];
        *(*yearlist) = year;
    }
    else //case, when there is already more than one student,allocating memory for temporary, bigger arrays, copying previous data, and adding new one
    {
        char **temp_names;
        char **temp_surname;
        int *temp_year;
        (temp_names) = new char *[*numberOfStudents + 1];
        (temp_surname) = new char *[*numberOfStudents + 1];
        temp_year = new int[*numberOfStudents + 1];
        int names_length;
        int surname_length;
        for (int i = 0; i < *numberOfStudents; i++)
        {
            names_length = (int)strlen(*(*nameList) + i) + 2;
            *(temp_names + i) = new char[names_length + 1];
            strcpy(*(temp_names + i), *(*nameList + i));
            surname_length = (int)strlen(*(*surnameList) + i) + 1;
            *(temp_surname + i) = new char[surname_length + 1];
            strcpy(*(temp_surname + i), *(*surnameList + i));
            *(temp_year + i) = *(*yearlist + i);
        }
        *((temp_names) + *numberOfStudents) = new char[(int)(strlen(name) + strlen(second_name) + 2)];
        strcpy(*((temp_names) + *numberOfStudents), name);
        strcat(*(temp_names + *numberOfStudents), " ");
        strcat(*(temp_names + *numberOfStudents), second_name);
        *((temp_surname) + *numberOfStudents) = new char[(int)(strlen(surname) + 1)];
        strcpy(*((temp_surname) + *numberOfStudents), surname);
        *(temp_year + *numberOfStudents) = year;

        for (int i = 0; i < *numberOfStudents; i++)
        {
            delete[](*(*nameList + i));
            delete[](*(*surnameList + i));
        }
        delete[](*nameList);
        delete[](*surnameList);
        delete[](*yearlist);
        (*nameList) = temp_names;
        (*surnameList) = temp_surname;
        (*yearlist) = temp_year;
        *numberOfStudents = *numberOfStudents + 1;
    }
}
void PrintListContent(int numberOfStudents, char **nameList)
{
    for (int i = 0; i < numberOfStudents; i++)
        std::cout << *(nameList + i) << std::endl;
}
void PrintAllListContent(int numberOfStudents, char **nameList, char **surnameList, int *yearlist)
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        std::cout << *(surnameList + i) << ", " << *(nameList + i) << " - year " << *(yearlist + i) << std::endl;
    }
}
void ClearStudents(int *numberOfStudents, char ***nameList, char ***surnameList, int **yearlist) //freeing memory, if it wasn't already done
{
    if (*nameList == NULL || *surnameList == NULL || yearlist == NULL)
        return;
    for (int i = 0; i < *numberOfStudents; i++)
    {
        delete[](*(*nameList + i));
        delete[](*(*surnameList + i));
    }
    delete[](*nameList);
    delete[](*surnameList);
    delete[](*yearlist);
}
void DeleteStudent(int *numberOfStudents, char ***nameList, char ***surnameList, int **yearsList, int studentToDeleteListIndex) //deleting selected student from array, allocating memory for new arrays, copying data with excluded deleted student
{
    if (*numberOfStudents == 1) //case, when there is only one student
    {
        delete[](**nameList);
        delete[](**surnameList);
        delete[](*nameList);
        delete[](*surnameList);
        delete[](*yearsList);
        (*nameList) = NULL;
        (*surnameList) = NULL;
        (yearsList) = NULL;
        *numberOfStudents = 0;
    }
    else if (*numberOfStudents == 0) //case, when there aren't any students
    {
        (**nameList) = NULL;
        (**surnameList) = NULL;
        (*yearsList) = NULL;
    }
    else //case, when there is more than one student
    {
        char **temp_names;
        char **temp_surname;
        int *temp_year;
        int names_length;
        int surname_length;
        temp_names = new char *[*numberOfStudents - 1];
        temp_surname = new char *[*numberOfStudents - 1];
        temp_year = new int[*numberOfStudents - 1];
        for (int i = 0, j = 0; i < *numberOfStudents; j++, i++)
        {

            if (i == studentToDeleteListIndex)
            {
                j -= 1;
                continue;
            }
            names_length = (int)strlen(*(*nameList + i)) + 1;
            surname_length = (int)strlen(*(*surnameList + i)) + 1;
            *(temp_names + j) = new char[names_length];
            *(temp_surname + j) = new char[surname_length];
            strcpy(*(temp_names + j), *(*nameList + i));
            strcpy(*(temp_surname + j), *(*surnameList + i));
            *(temp_year + j) = *(*yearsList + i);
        }
        for (int i = 0; i < *numberOfStudents; i++)
        {
            delete[](*(*nameList + i));
            delete[](*(*surnameList + i));
        }
        delete[](*nameList);
        delete[](*surnameList);
        delete[](*yearsList);
        (*nameList) = temp_names;
        (*surnameList) = temp_surname;
        (*yearsList) = temp_year;
        *numberOfStudents = *numberOfStudents - 1;
    }
}
