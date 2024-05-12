#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculate_charges(float hours);

int main()
{
    int i;
    float hrs, res, sum = 0.0, th = 0.0;
    system("color 8F");
    printf("Car\t\tHours\t\tCharges\n");
    for (i = 1; i <= 3; i++)
    {
        printf("%d.\t\t", i);
        scanf("%f", &hrs);
        res = calculate_charges(hrs);
        printf("\t   \t\t\t%.2f\n", res);
        sum += res;
        th += hrs;
    }
    printf("\nTOTAL :\t\t%.2f\t\t%.2f", th, sum);
    return 0;
}

float calculate_charges(float hours)
{
    int nh, count;
    float charges = 2.00, c;

    if (hours <= 3)
    {
        c = charges;
    }
    else if (hours > 3.00 && hours < 24.00)
    {
        nh = hours - 3.00;
        for (count = 1; count <= nh; count++)
        {
            c = charges + 0.50;
        }
    }
    else if (hours == 24)
    {
        c = 10.00;
    }

    return c;
}