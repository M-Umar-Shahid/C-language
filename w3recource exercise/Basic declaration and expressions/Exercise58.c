#include<stdio.h>
int main()
{
    float num1,num2,num3,num4,max,min;
    printf("Enter first number : ");
    scanf("%f",&num1);
    max=num1;
    min=num1;
    printf("Enter second number : ");
    scanf("%f",&num2);
    if(num2>max)
    {
        max=num2;
    }
    else if(num2<min)
    {
        min=num2;
    }
    printf("Enter third number : ");
    scanf("%f",&num3);
    if(num3>max)
    {
        max=num3;
    }
    else if(num3<min)
    {
        min=num3;
    }
    printf("Enter fourth number : ");
    scanf("%f",&num4);
    if(num4>max)
    {
        max=num4;
    }
    else if(num4<min)
    {
        min=num4;
    }
    printf("%f\n",min);
    printf("%f\n",max);
    printf("The difference b/w max and min number is : %.3f",max-min);
}