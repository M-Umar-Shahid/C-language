#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float distance;
    printf("Enter value of x1 : ");
    scanf("%d", &x1);
    printf("Enter value of y1 : ");
    scanf("%d", &y1);
    printf("Enter value of x2 : ");
    scanf("%d", &x2);
    printf("Enter value of y2 : ");
    scanf("%d", &y2);
    printf("The distance between the two points is : %f", pow(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)), 0.5));
}