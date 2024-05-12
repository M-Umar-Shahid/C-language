#include<stdio.h>
int main()
{
    int num,total=0,num1;
    printf("Enter how many number you want to sum : ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num1);
        total=total+num1;
    }
    printf("Maximum sum is : %d",total);
}