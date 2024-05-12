#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n)
{
    if (n<=1)
        return n;
    else
        return(fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int n,i =0,v;
    printf("enter a number");
    scanf("%d",&n);

    for(v=1;v<=n;v++)
    {
        printf("%d\n",fibonacci(i));
        i++;
    }
    printf("the %d term of fibonnaci series is %d",n,fibonacci(i-1));
    return 0;
}
