#include <stdio.h>
int main()
{
    int a, b;
    printf("Input 1st number (positive or negative) : ");
    scanf("%d", &a);
    printf("Input 2nd number (positive or negative) : ");
    scanf("%d", &b);
    if (a < 0)
    {
        printf("%d\n",a*(-1));
    }
    else
    {
        printf("%d\n",a);
    }
    if (b < 0)
    {
        printf("%d\n",b*(-1));
    }
    else
    {
        printf("%d\n",b);
    }
}