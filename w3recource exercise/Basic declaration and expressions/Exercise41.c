#include <stdio.h>
int main()
{
    int n,a=1;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j=1; j <= 3; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}