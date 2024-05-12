#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number (1-4000): ");
    scanf("%d", &n);
    for (int a = 0; a <= 1000; a++)
    {
        for (int b = 0; b <= 1000; b++)
        {
            for (int c = 0; c <= 1000; c++)
            {
                for (int d = 0; d <= 1000; d++)
                {
                    if (a + b + c + d == n)
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("Total number of combinations:%d", count);
}