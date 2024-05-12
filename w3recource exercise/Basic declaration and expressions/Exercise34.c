#include<stdio.h>
int main()
{
    int num1,num2,total=0;
    printf("Enter first pair of range : ");
    scanf("%d",&num1);
    printf("Enter second pair of range : ");
    scanf("%d",&num2);
       if(num2>num1)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
    }
    for(int i=num1;i<=num2;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            total=total+i;
        }
    }
    printf("Sum = %d",total);
}