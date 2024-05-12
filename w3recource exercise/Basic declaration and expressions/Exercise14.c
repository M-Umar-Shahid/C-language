#include <stdio.h>
int main()
{
    int distance;
    float liters;
    printf("Enter total distance traveled in KM: ");
    scanf("%d", &distance);
    printf("Enter fuel in liters : ");
    scanf("%f", &liters);
    printf("Average consumption of bike is : %.2f", distance / liters);
}