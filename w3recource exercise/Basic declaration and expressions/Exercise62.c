#include <stdio.h>
int main()
{
    int num, number, total = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num < 500)
    {
        while (num != 0)
        {
            number = num % 10;
            total = total + number;
            num = num / 10;
        }
        printf("The sum is %d ",total);
    }
}