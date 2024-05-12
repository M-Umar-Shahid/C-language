#include <stdio.h>
int main()
{
    int i, flag, j, rev = 0, rem;
    for (i = 5; i <= 200; i++)
    {
        flag = 1;
        for (j = 2; j < i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            rem = i % 10;
            i = i / 10;
            rev = (rev * 10) + rem;
            if (rev == i)
            {
                printf("The number is a palindrome");
            }
        }
    }
}