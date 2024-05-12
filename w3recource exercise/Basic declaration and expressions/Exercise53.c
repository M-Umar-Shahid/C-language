#include<stdio.h>
int main()
{
    int principal,rate_intrest,time;
    float intrest;
    printf("Enter principal amount : ");
    scanf("%d",&principal);
    printf("Enter rate of intrest in %%: ");
    scanf("%d",&rate_intrest);
    printf("Enter time in years : ");
    scanf("%d",&time);
    intrest=(principal*((float)rate_intrest/100))*time;
    printf("The simple intrest is : %.2f",intrest);
}