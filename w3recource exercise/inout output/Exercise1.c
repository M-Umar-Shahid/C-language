#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temprature in celcius : ");
    scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("%.1f\n", f);
}