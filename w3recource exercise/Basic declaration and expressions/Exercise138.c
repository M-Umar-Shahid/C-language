#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,x3,x4,y3,y4;
    printf("Enter value of P(x1,y1)");
    scanf("%d %d",&x1,&y1);
    printf("Enter value of Q(x2,y2)");
    scanf("%d %d",&x1,&y2);
    printf("Enter value of R(x3,y3)");
    scanf("%d %d",&x3,&y3);
    printf("Enter value of S(x4,y4)");
    scanf("%d %d",&x4,&x4);
    if ((y2-y1)/(x2-x1) ==(y4-y3)/(x4-x3))
    {
        printf("The lines are parallel");
    }
    else
    {
        printf("The lines are not parallel");
    }
    
}