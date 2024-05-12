#include<stdio.h>
int main()
{
    int x,y;
    printf("Input the coordinates (x,y)\n");
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    if (x>0 && y>0)
    {
        printf("The point lies in Quadrent 1");
    }
    else if (x<0 && y<0)
    {
        printf("The point lies in Quadrent 3");
    }
    else if (x<0 && y>0)
    {
        printf("The point lies in Quadrent 2");
    }
    else if (x>0 && y<0)
    {
        printf("The point lies in Quadrent 4");
    }
    
}