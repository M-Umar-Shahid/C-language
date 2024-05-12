#include<stdio.h>
int main()
{
    int a,b,n,i;
    a=0;
    b=1;
    printf("enter a number");
    scanf("%d",&n);
    if (n==0 || n==1)
    printf("fibonacci series is %d",n);
    else{
        printf("fibonacci series is ");
    for(i=1;i<=n;i++)
    {
        b=a+b;  //1
        a=b-a;  
        printf("%d  ",b);

    }
    }
}