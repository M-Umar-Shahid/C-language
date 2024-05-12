#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d", num * -1);
    }
    else
    {
        printf("%d", num);
    }
}