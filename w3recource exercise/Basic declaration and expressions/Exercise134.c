#include <stdio.h>
int main()
{
    int base, hyp, perp;

    printf("Input the first sides of a trainagel:\n");
    scanf("%d", &base);
    printf("Input the second sides of a trainagel:\n");
    scanf("%d", &hyp);
    printf("Input the third sides of a trainagel:\n");
    scanf("%d", &perp);
    if ((base * base) + (hyp * hyp) == (perp * perp) || (base * base) + (perp * perp) == (hyp * hyp) || (hyp * hyp) + (perp * perp) == (base * base))
    {
        printf("It is a right angle triangle!\n");
    }
    else
    {
        printf("It is not a right angle triangle!\n");
    }
    return 0;
}