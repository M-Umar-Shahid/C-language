#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("# ");
        }
        
        printf("\n");
    }
    
}