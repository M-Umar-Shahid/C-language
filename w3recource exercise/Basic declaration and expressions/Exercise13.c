#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter first number : ");
    scanf("%d", &a);
    max = a;
    printf("Enter second number : ");
    scanf("%d", &b);
    if (b > max)
    {
        max = b;
    }
    printf("Enter third number : ");
    scanf("%d", &c);
    if (c > max)
    {
        max = c;
    }
    printf("The maximum number is : %d", max);
}