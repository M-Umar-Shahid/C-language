#include <stdio.h>
#include <math.h>
int main()
{
    int num, a, total = 0, b = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num < 1 || num > 100)
    {
        printf("Wrong input");
        return 0;
    }
    for (int i = 1; i <= num; b++)
    {
        a = pow(i, 4);
        total = total + a;
        i = i + b;
    }
    printf("The sum of series is : %d", total);
}