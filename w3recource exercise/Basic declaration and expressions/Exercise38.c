#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    if(y!=0)
    {
        printf("%d /%d =%.2f",x,y,(float)x/(float)y);
    }
    else
    {
        printf("Division not possible");
    }
}