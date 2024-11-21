#include "studentreader.h"
#include <stdio.h>

int main()
{
    Student *students = readStudentFile("studentinfo.csv");

    while(students != NULL)
    {
        printf("%s\n", students->email);
        students = students->next;
    }

    return 0;
}
