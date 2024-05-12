#include <stdio.h>
int main()
{
    int a, b, c, min, max, mid;
    printf("Enter first number : ");
    scanf("%d", &a);
    min = a;
    max = a;
    mid = a;
    printf("Enter second number : ");
    scanf("%d", &b);
    if (b > max)
    {
        max = b;
    }
    else if (b < min)
    {
        min = b;
    }
    else
    {
        mid = b;
    }
    printf("Enter third number : ");
    scanf("%d", &c);
    if (c > max)
    {
        max = c;
    }
    else if (c < min)
    {
        min = c;
    }
    else
    {
        mid=c;
    }
    printf("Unsorted numbers : %d %d %d\n",a,b,c);
    printf("Sorted numbers : %d %d %d",min,mid,max);
}