#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,sum;
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
    if (num1%2 != 0 && num2%2 != 0 && num3%2 != 0 && num4%2 != 0 && num5%2 != 0)
    {
        sum=num1+num2+num3+num4+num5;
    }
    
}