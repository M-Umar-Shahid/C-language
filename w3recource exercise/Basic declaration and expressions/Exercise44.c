#include <stdio.h>
int main()
{
    int marks, count = 0,total=0;
    float average;
    do
    {
        printf("Enter marks of student : ");
        scanf("%d",&marks);
        count++;
        total=total+marks;
    } while (marks > 0);
    average = (float)total/ (count-1);
    printf("The average marks are : %.2f",average);
}