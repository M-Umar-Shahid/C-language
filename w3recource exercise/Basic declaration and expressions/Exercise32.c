#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer : ");
    scanf("%d",&num);
    for ( int i = 0; i < 100; i++)
    {
        if(i%num ==3)
        {
            printf("%d\n",i);
        }
    }
    
}