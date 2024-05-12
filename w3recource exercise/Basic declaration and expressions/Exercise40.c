#include<stdio.h>
int main()
{
    int num1,num2,num;
    printf("Enter first number of range : ");
    scanf("%d",&num1);
    printf("Enter second number of range : ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
    }
    for(int i=num1;i<num2;i++)
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d\n",i);
        }
    }
}