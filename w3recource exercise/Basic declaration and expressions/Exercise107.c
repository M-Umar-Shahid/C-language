#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Even: ");
    for (int i = num+1; i <= num+20; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("\nOdd: ");
    for (int i = num+1; i <= num+20; i++)
    {
        if (i%2!=0)
        {
            printf("%d ",i);
        }
    }
    
}