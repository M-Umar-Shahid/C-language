#include<stdio.h>
int main()
{
    int cm;
    float inch;
    printf("Enter length in cm : ");
    scanf("%d",&cm);
    inch=cm*0.3937;
    printf("The length in inches is : %.2f",inch);
}