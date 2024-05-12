#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    if (a > b)
    {
        c = a % b;
    }
    else if (a < b)
    {
        c = b % a;
    }
    if (c == 0)
    {
        printf("The numbers are multiples of each other");
    }
    else
    {
        printf("The numbers are not multiples of each other");
    }
}