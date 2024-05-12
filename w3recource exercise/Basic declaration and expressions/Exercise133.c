#include<stdio.h>
int main()
{
    int num1,num2,sum,count=0;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    sum=num1+num2;
    while (sum!=0)
    {
        sum=sum/10;
        count++;
    }
    printf("Number of digits of the sum value of the said numbers:%d",count);
}