#include<stdio.h>
int main()
{
    int n,i,a;
    printf("Enter a number : ");
    scanf("%d",&n);
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
    printf("%d\n",a);
    while (a%10==0)
    {
        a=a/10;
    }
    printf("%d",a%10);
    
}