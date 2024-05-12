#include <stdio.h>
int main()
{
    int a;
    printf("Input 1st number (positive or negative) : ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("%d\n",a*(-1));
    }
    else
    {
        printf("%d\n",a);
    }
}