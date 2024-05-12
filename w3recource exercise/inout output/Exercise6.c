#include<stdio.h>
int main()
{
    int h,min,m;
    printf("Input number of minutes : ");
    scanf("%d",&m);
    printf("Hours : %d\tminutes : %d ",m/60,m%60);
}