#include<stdio.h>
int main()
{
    int num,i;
    float sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+(1/(float)i);
    }
    printf("The sum is : %.2f",sum);
}