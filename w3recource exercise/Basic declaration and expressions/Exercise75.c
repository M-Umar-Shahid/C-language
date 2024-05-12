#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a seven digit number : ");
    scanf("%d",&num);
    n=num/1000000;
    printf("%d\n",n);
    n=num/100000;
    n=n%10;
    printf("%d\n",n);
    n=num/10000;
    n=n%10;
    printf("%d\n",n);
    n=num/1000;
    n=n%10;
    printf("%d\n",n);
    n=num/100;
    n=n%10;
    printf("%d\n",n);
    n=num/10;
    n=n%10;
    printf("%d\n",n);
    n=num/1;
    n=n%10;
    printf("%d\n",n);
}