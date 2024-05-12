#include <stdio.h>
#include <stdlib.h>

int main()
{
int bs,hra,ma,da,ta,tax,ub;
printf("Enter your basic salary :");
scanf("%d",&bs);
if(bs<50000)
{
    hra=0.03*bs;
    ma=0.02*bs;
    da=0.02*bs;
    ta=0.01*bs;
    tax=0.005*bs;
    ub=0.04*bs;
    printf("\nHouse Rent Allowance=%d",hra);
    printf("\nMedical Allowances=%d",ma);
    printf("\nDaily Allowances=%d",da);
    printf("\nTravelling Allowances=%d",ub);
    printf("\nTax=%d",tax);
    printf("\nUtility bills=%d",ub);
    }
    if(bs>=50000 && bs<=100000)
{
    hra=0.05*bs;
    ma=0.03*bs;
    da=0.03*bs;
    ta=0.02*bs;
    tax=0.02*bs;
    ub=0.04*bs;
    printf("\nHouse Rent Allowance=%d",hra);
    printf("\nMedical Allowances=%d",ma);
    printf("\nDaily Allowances=%d",da);
    printf("\nTravelling Allowances=%d",ub);
    printf("\nTax=%d",tax);
    printf("\nUtility bills=%d",ub);
    }
    if(bs>100000)
{
    hra=0.04*bs;
    ma=0.07*bs;
    da=0.04*bs;
    ta=0.03*bs;
    tax=0.03*bs;
    ub=0.1*bs;
    printf("\nHouse Rent Allowance=%d",hra);
    printf("\nMedical Allowances=%d",ma);
    printf("\nDaily Allowances=%d",da);
    printf("\nTravelling Allowances=%d",ub);
    printf("\nTax=%d",tax);
    printf("\nUtility bills=%d",ub);
    }
    return 0;
}
