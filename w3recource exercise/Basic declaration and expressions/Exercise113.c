#include<stdio.h>
int main()
{
    int a,b=100;
    for (int i = 1; i < 52; i=i+5,b=b-10)
    {
        printf("a=%d\tb=%d\n",i,b);
    }
    
}