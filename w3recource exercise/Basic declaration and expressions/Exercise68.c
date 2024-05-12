#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float b;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        a=pow(2,i);
        b=pow(2,-i);
        printf("%d\t%d\t%f\n",n,a,b);
    }
    
}