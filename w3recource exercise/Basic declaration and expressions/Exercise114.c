#include <stdio.h>
int main()
{
    int num1, num2, total_even = 0,temp;
    printf("Enter first integer of range : ");
    scanf("%d", &num1);
    printf("Enter second integer of range : ");
    scanf("%d", &num2);
    if (num2<num1)
    {
        temp=num2;
        num2=num1;
        num1=temp;
    }
    
    for (int i = num1+1 ; i < num2; i++)
    {
        if (i % 2 == 0)
        {
            total_even = total_even + i;
        }
    }
    printf("Sum of even numbers is : %d\n", total_even);
}