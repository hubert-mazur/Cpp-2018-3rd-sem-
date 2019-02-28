#ifndef _STUDENT_LIST_H_
#define _STUDENT_LIST_H_
#include <iostream>
#include <string.h>

void AddStudent(int *numberOfStudents, char ***nameList, char ***surnameList, int **yearlist, char *name, char *second_name, char *surname, int year); //adding data to arrays
void PrintListContent(int numberOfStudents, char **nameList);                                                                                          //printing elemnts of an array in selected mode (e.g just names)
void PrintAllListContent(int numberOfStudents, char **nameList, char **surnameList, int *yearlist);                                                    //printing all elements of arrays
void ClearStudents(int *numberOfStudents, char ***nameList, char ***surnameList, int **yearlist);                                                      //freeing memory
void DeleteStudent(int *numberOfStudents, char ***namesList, char ***surnamesList, int **yearsList, int studentToDeleteListIndex);                     //deleting selected student from an array
#endif