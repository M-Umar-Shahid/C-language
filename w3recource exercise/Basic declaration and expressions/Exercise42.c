#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d",i,i*i,i*i*i);
        printf("\n");
    }
}