#include<stdio.h>
int main()
{
    int m,n,count=0,total=0;
    printf("Enter a number from which you want to start : ");
    scanf("%d",&m);
    printf("Enter how many numbers you want sum of odd numbers : ");
    scanf("%d",&n);
    for (int i = m; count<n; i++)
    {
        if (i%2!=0)
        {
            count++;
            total=total+i;
        }
    }
    printf("Sum of %d odd numbers starting from %d : %d",n,m,total);
}