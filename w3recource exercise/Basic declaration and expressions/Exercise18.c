#include<stdio.h>
int main()
{
    int input_days,years,months,days;
    printf("Enter total number of days : ");
    scanf("%d",&input_days);
    years=input_days/365;
    months=(input_days%365) /30;
    days=(input_days%365) %30;
    printf("Years : %d\nMonths : %d\nDays : %d",years,months,days);
}