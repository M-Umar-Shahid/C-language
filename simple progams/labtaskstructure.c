#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int roll_num;
    char name[50];
    int mark[3];
} st[10];

int main()
{
    int i, j,k;
    for (i = 0; i < 10; i++)
    {
        printf("Enter name of student : ");
        fflush(stdin);
        gets(st[i].name);
        printf("Enter roll number : ");
        scanf("%d", &st[i].roll_num);
        for (j = 1; j <= 3; j++)
        {
            printf("Enter you marks in subject %d : ", j);
            scanf("%d", &st[i].mark[j]);
        }
    }
    for ( k = 0; k < 10; k++)
    {
        printf("The name of student is : %s",st[k].name);
        printf("\nThe roll no. of student is : %d",st[k].roll_num);
        printf("\nMarks in  subject 1 : %d\nMarks in  subject 2 : %d\nMarks in  subject 3 : %d",st[k].mark[1],st[k].mark[2],st[k].mark[3]);
        printf("\nTotal marks : %d",st[k].mark[1]+st[k].mark[1]+st[k].mark[1]);
        printf("\nAverage of marks is : %d",(st[k].mark[1]+st[k].mark[1]+st[k].mark[1])/3);



    }
    
}