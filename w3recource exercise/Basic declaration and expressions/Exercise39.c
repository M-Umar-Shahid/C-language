#include<stdio.h>
int main()
{
    int num1,num2,total=0;
    printf("Enter first number of the range : ");
    scanf("%d",&num1);
    printf("Enter second number of the range : ");
    scanf("%d",&num2);
       if(num1>num2)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
    }
    for(int i=num1;i<=num2;i++)
    {
        if(i%17!=0)
        {
            total=total+i;
        }
    }
    printf("The sum is : %d",total);

}