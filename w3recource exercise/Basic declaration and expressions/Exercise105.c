#include <stdio.h>
int main()
{
    float num1, num2, num3, num4, num5, num6, num7, pos_total = 0, neg_total = 0;
    int pos = 0, neg = 0;
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);
    printf("Enter third number : ");
    scanf("%f", &num3);
    printf("Enter fourth number : ");
    scanf("%f", &num4);
    printf("Enter fifth number : ");
    scanf("%f", &num5);
    printf("Enter sixth number : ");
    scanf("%f", &num6);
    printf("Enter seventh number : ");
    scanf("%f", &num7);
    if (num1 > 0)
    {
        pos = pos + 1;
        pos_total = pos_total + num1;
    }
    else
    {
        neg_total = neg_total + num1;
    }
    if (num2 > 0)
    {
        pos_total = pos_total + num2;
        pos = pos + 1;
    }
     else
    {
        neg_total = neg_total + num2;
    }
    if (num3 > 0)
    {
        pos_total = pos_total + num3;
        pos = pos + 1;
    }
     else
    {
        neg_total = neg_total + num3;
    }
    if (num4 > 0)
    {
        pos_total = pos_total + num4;
        pos = pos + 1;
    }
     else
    {
        neg_total = neg_total + num4;
    }
    if (num5 > 0)
    {
        pos_total = pos_total + num5;
        pos = pos + 1;
    }
     else
    {
        neg_total = neg_total + num5;
    }
    if (num6 > 0)
    {
        pos_total = pos_total + num6;
        pos = pos + 1;
    }
     else
    {
        neg_total = neg_total + num6;
    }
    if (num7 > 0)
    {
        pos_total = pos_total + num7;
        pos = pos + 1;
    }
     else
    {
        neg_total = neg_total + num7;
    }
    neg = 7 - pos;
    printf("The number of positive integars are : %d\n", pos);
    printf("The number of negative integars are : %d\n", neg);
    printf("The average of negative integars are : %.2f\n", neg_total/neg);
    printf("The average of positive integars are : %.2f\n", pos_total/pos);
}