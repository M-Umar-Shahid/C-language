#include <stdio.h>
#include<math.h>
int main()
{
    int years,days,weeks,days1;
    printf("enter number of days");
    scanf("%d",&days);
    years=days/365;
    printf("years :%d",years);
    weeks=(days%365)/7;
    printf("\nweeks : %d",weeks);
    days1=(days%365)%7;
    printf("\ndays :%d",days1);
    return 0;
}