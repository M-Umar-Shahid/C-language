#include <stdio.h>
int main()
{
    int p, q, r, s;
    printf("Enter the even value of p: ");
    scanf("%d", &p);
    printf("Enter the positive value of q: ");
    scanf("%d", &q);
    printf("Enter the positive value of r: ");
    scanf("%d", &r);
    printf("Enter the positive value of s: ");
    scanf("%d", &s);
    if (q > r && s > p && (r + s) > (p + q))
    {
        printf("Correct values");
    }
    else
    {
        printf("Wrong values");
    }
}