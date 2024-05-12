#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,pos=0,total=0;
    float average;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("Enter third number : ");
    scanf("%d",&num3);
    printf("Enter fourth number : ");
    scanf("%d",&num4);
    printf("Enter fifth number : ");
    scanf("%d",&num5);
    if(num1>0)
    {
        pos=pos+1;
        total=total+num1;
    }
    if(num2>0)
    {
        pos=pos+1;
        total=total+num2;
    }
    if(num3>0)
    {
        pos=pos+1;
        total=total+num3;
    }
    if(num4>0)
    {
        pos=pos+1;
        total=total+num4;
    }
    if(num5>0)
    {
        pos=pos+1;
        total=total+num5;
    }
    printf("The number of positive integers are : %d\n",pos);
    average=total/pos;
    printf("The average of all positive integers is %.2f",average);
}