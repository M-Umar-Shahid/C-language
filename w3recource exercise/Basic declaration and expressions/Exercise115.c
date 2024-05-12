#include<stdio.h>
int main()
{
    int num1,num2,total=0,count=0;
    printf("Enter first number of pair : ");
    scanf("%d",&num1);
    printf("Enter second number of pair : ");
    scanf("%d",&num2);
    printf("equence from lower to higher number \n");
    for (int i = num1; i <= num2; i++)
    {
        printf("%d ",i);
        total=total+i;
        count++;
    }
    printf("\nAverage of the sequence of numbers : %.2f",(float)total/(float)count);
    
}