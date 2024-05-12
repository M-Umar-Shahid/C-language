#include<stdio.h>
int main()
{
    int h,m;
    printf("Input hours : ");
    scanf("%d",&h);
    printf("Input minutes : ");
    scanf("%d",&m);
    printf("Total minutes : %d",(h*60)+m);
}