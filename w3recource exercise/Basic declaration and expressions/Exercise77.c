#include<stdio.h>
int main()
{
    int p_amount,interest,days;
    float rate;
    printf("Enter principal amount : ");
    scanf("%d",&p_amount);
    printf("Enter interest rate : ");
    scanf("%f",&rate);
    printf("Enter days : ");
    scanf("%d",&days);
    printf("The total interest is : %.2f",p_amount*rate*(days/365));

}