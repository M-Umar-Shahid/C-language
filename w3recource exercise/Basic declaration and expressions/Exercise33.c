#include <stdio.h>
int main()
{
    int position, num1, num2, num3, num4, num5, max;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    max = num1;
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    if (num2 > max)
    {
        max = num2;
    }
    printf("Enter number 3 : ");
    scanf("%d", &num3);
    if (num3 > max)
    {
        max = num3;
    }
    printf("Enter number 4 : ");
    scanf("%d", &num4);
    if (num4 > max)
    {
        max = num4;
    }
    printf("Enter number 5 : ");
    scanf("%d", &num5);
    if (num5 > max)
    {
        max = num5;
    }
    printf("The highest value is : %d\n",max);
    if(num1==max)
    {
        position=1;
    }
    if(num2==max)
    {
        position=2;
    }
    if(num3==max)
    {
        position=3;
    }
    if(num4==max)
    {
        position=4;
    }
    if(num5==max)
    {
        position=5;
    }
    printf("The position of highest value is : %d",position);
}