#include <stdio.h>
int main()
{
    int num, count = 1, total = 0, num1 = 1, min, max;
    printf("Enter a number : ");
    scanf("%d", &num);
    total = num;
    min = num;
    max = num;
    while (num > 0 && num1 > 0)
    {

        if (num <= 0)
        {
            total = 0;
            count = 0;
            break;
        }
        printf("Enter next number : ");
        scanf("%d", &num1);
        total = total + num1;
        if (num1 <= 0)
        {
            break;
        }
        count++;
        if (num1 < min)
        {
            min = num1;
        }
        if (num1 > max)
        {
            max = num1;
        }
    }
    printf("Positive numbers are : %d\n", count);
    printf("maximum numbers are : %d\n", max);
    printf("minimum number is : %d\n", min);
    printf("The average of positive numbers is : %.2f\n", (float)total / (float)count);
}