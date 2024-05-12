#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number of rows : ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf(" ");
            for (int k = 0; k < num; k++)
            {
                if (k==num/2)
                {
                    printf("*");
                }    
            }
        }
        printf("\n");
    }
}