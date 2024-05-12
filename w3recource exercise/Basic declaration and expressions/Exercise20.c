#include <stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    printf("Input the first number(a): ");
    scanf("%f",&a);
    printf("Input the second number(b): ");
    scanf("%f",&b);
    printf("Input the third number(c) : ");
    scanf("%f",&c);
    printf("Root 1 : %f\nRoot 2 : %f\n",(-b + pow((b*b) - (4*a*c),0.5))/(2*a),(-b - pow((b*b) - (4*a*c),0.5))/(2*a));
}