#include<stdio.h>
int main()
{
    int num;
    printf("Input a number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (i!=num)
        {
            printf("%d,",i);
        }
        else
        {
            printf("%d",i);
        }
        
    }
    
}