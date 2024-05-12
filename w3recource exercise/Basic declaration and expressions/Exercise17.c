#include<stdio.h>
int main()
{
    int input_seconds,hours,minutes,seconds;
    printf("Enter number of seconds : ");
    scanf("%d",&input_seconds);
    hours=input_seconds/(60*60);
    minutes=(input_seconds/60) % 60;
    seconds=input_seconds%60;
    printf("The time is =  %d : %d : %d",hours,minutes,seconds);
}