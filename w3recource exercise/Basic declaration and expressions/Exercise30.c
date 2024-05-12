#include<stdio.h>
#include<math.h>
int main()
{
    int num,square;
    printf("Enter a number to which you want to find the range of squares : ");
    scanf("%d",&num);
    for (int i=2;i<=num;i=i+2)
    {
        square=pow(i,2);
        printf("%d ^ 2 = %d\n",i,square);
    }
}