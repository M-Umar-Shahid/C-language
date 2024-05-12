#include <stdio.h>
int main()
{
    float sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        sum = sum + (1 / (float)i);
    }
    printf("The sum of series is : %.2f", sum);
}