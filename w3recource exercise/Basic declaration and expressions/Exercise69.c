#include<stdio.h>
int main()
{
    int n,a,b,i;
    n=10;
    i=n-1;
    a=n*i;
    for(;i>=1;)
    {   
        if(i==1)
        {
            break;
        }
        i--;
        a=a*i;
    }
    printf("%d",a);
}