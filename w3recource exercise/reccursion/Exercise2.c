#include<stdio.h>
int sum(int x);
int main()
{
    int num,result;
    printf("Enter ending number of the range : ");
    scanf("%d",&num);
    result=sum(num);
}
int sum(int x)
{
    static int total=0;
    static int i=1;
    while (i<=x)
    {
    total=total+i;
    i++;
    sum(x);
    }
    return total; 
}