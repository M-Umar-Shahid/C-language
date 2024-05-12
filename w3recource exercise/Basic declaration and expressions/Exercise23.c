#include <stdio.h>
int main()
{
    float a, b, c,perimeter;
    printf("Enter value of side a of triangle : ");
    scanf("%d", &a);
    printf("Enter value of side b of triangle : ");
    scanf("%d", &b);
    printf("Enter value of side c of triangle : ");
    scanf("%d", &c);
    if ((a+b) >= c && (a+c) >= b && (c+b) >= a)
    {
        printf("The triangle is possible\n");
        perimeter=a+b+c;
        printf("The perimeter of triangle is : %.2f",perimeter);
    }
    else
    {
        printf("It is not a triangle");
    }
}