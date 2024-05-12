#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[20];
    int id;
} st[3], *student;

int main()
{
    student = st;
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Enter student name : ");
        gets((student + i)->name);
        printf("Enter student id : ");
        scanf("%d", &(student + i)->id);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", ((student + i)->name));
        printf("%s\n", ((st + i)->name));
        printf("%d", (student + i)->id);
    }
}