#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of y : ");
    scanf("%d",&y);
    printf("Values before swapping : %d :: %d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Values after swapping : %d :: %d\n",x,y);
}