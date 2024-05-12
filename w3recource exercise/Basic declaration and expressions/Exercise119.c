#include<stdio.h>
int main()
{
    int num1,num2,total=0,temp;
    printf("Enter first number of range : ");
    scanf("%d",&num1);
    printf("Enter second number of range : ");
    scanf("%d",&num2);
    if (num2<num1)
    {
        temp=num2;
        num2=num1;
        num1=temp;
    }
    for (int i = num1; i <= num2; i++)
    {
        if (i%7!=0)
        {
            total=total+i;
        }
        
    }
    printf("Sum of all numbers between said numbers not divisible by 7: %d",total);
    
}