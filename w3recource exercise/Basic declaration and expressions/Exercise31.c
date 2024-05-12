#include <stdio.h>
int main()
{
    int num, odd = 0, even = 0, pos = 0, neg = 0;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter a integer : ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
        }
        if (num < 0)
        {
            neg++;
        }
        if (num % 2 != 0)
        {
            odd++;
        }
        if (num > 0)
        {
            pos++;
        }
    }
    printf("Number of even values: %d\nNumber of odd values: %d\nNumber of positive values: %d\nNumber of negative values: %d\n",even,odd,pos,neg);
}