#include <stdio.h>

int main()
{
    float num = 0;
    printf("Input a number: ");
    scanf("%f", &num);
    if (num >= 0 && num <= 30)
        printf("Range [0,30]\n");
    else if (num > 30 && num <= 50)
        printf("Range (30,50]\n");
    else if (num > 50 && num <= 80)
        printf("Range (50,80]\n");
    else if (num > 80 && num <= 100)
        printf("Range (80,100]\n");
    else
        printf("\nNot within range..!\n");
}