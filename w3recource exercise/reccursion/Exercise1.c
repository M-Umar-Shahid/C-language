#include<stdio.h>
void naturalnum(int x);
int main()
{
    int n;
    n=1;
    naturalnum(n);
}
void naturalnum(int x)
{
    if(x<=50)
    {
        printf(" %d ",x);
        naturalnum(x+1);
    }
}
