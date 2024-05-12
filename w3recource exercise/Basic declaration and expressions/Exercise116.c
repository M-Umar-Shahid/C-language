#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number of the pair : ");
    scanf("%d",&num1);
    printf("Enter second number of the pair : ");
    scanf("%d",&num2);
    if(num1 > num2)
    {
        printf("%d : %d\n",num1,num2);
        printf("The pair is in descending order");
    }
    if(num1 < num2)
    {
        printf("%d : %d\n",num1,num2);
        printf("The pair is in ascending order");
    }
}