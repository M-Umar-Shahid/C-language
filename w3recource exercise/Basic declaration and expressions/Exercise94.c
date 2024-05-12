#include<stdio.h>
int main()
{
    float w,h,bmi;
    printf("Enter your weight : ");
    scanf("%f",&w);
    printf("Enter your height : ");
    scanf("%f",&h);
    bmi=w/(h*h);
    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if(18.5 <=bmi < 25.0)
    {
        printf("Normal weight");
    }
    else if(25.0 <=bmi < 30.0)
    {
        printf("Overweight");
    }
    else if(30.0 <= bmi)
    {
        printf("Obesity");
    }
}