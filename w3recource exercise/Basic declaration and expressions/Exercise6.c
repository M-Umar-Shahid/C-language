#include<stdio.h>
int main()
{
    int radius;
    float area,perimeter;
    printf("Enter radius of the circle : ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("The area of circle is : %.2f\n",area);
    printf("The perimeter of circle is : %.2f",perimeter);
}