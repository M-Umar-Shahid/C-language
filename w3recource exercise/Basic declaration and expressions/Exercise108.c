#include <stdio.h>
int main()
{
    int num1, num2, total_even = 0, total_odd = 0;
    printf("Enter first integer of range : ");
    scanf("%d", &num1);
    printf("Enter second integer of range : ");
    scanf("%d", &num2);
    for (int i = num1+1 ; i < num2; i++)
    {
        if (i % 2 == 0)
        {
            total_even = total_even + i;
        }
        if (i % 2 != 0)
        {
            total_odd = total_odd + i;
        }
    }
    printf("Sum of even numbers is : %d\n", total_even);
    printf("Sum of odd numbers is : %d", total_odd);
}