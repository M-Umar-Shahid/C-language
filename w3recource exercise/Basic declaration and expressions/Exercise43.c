#include <stdio.h>
int main()
{
    int n, c, a = 1;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    printf("Enter number of characters in a line : ");
    scanf("%d", &c);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}