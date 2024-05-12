#include<stdio.h>
int add(int *a,int *b)
{
    int *temp;
    *temp=*a;
    
}



int main()
{
    int a=4,b=3,c;
    c=add(&a,&b);
    printf("%d",c);
}