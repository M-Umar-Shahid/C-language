#include<stdio.h>
int main()
{
    int h,w,p;
    printf("Enter value of height : ");
    scanf("%d",&h);
    printf("Enter value of width : ");
    scanf("%d",&w);
    p=2*(w+h);
    printf("Perimeter of the Rectangle is : %d",p);
}