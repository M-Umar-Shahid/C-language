#include <stdio.h>
#include<math.h>
int main()
{
    int n,rem,rev;
    printf("enter a number :");
    scanf("%d",&n);
    rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("the reversed number is %d",rev);
    return 0;
}