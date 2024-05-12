#include<stdio.h>
int main()
{
    float r,v;
    printf("Input radius of sphere : ");
    scanf("%f",&r);
    v=1.333333*3.14*r*r*r;
    printf("The volume of sphere is %.2f",v);
}