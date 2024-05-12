#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,pos=0,neg=0;
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
    }
    if(num2>0)
    {
        pos=pos+1;
    }
    if(num3>0)
    {
        pos=pos+1;
    }
    if(num4>0)
    {
        pos=pos+1;
    }
    if(num5>0)
    {
        pos=pos+1;
    }
    neg=5-pos;
    printf("The number of positive integars are : %d\n",pos);
    printf("The number of negative integars are : %d\n",neg);
}