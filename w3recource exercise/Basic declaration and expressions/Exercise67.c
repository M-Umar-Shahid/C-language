#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,ans;
    printf("Enter value of x : ");
    scanf("%d",&x);
    printf("Enter value of n : ");
    scanf("%d",&n);
    ans=pow(x,n);
    printf("The solution is : %d",ans);
}