#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    float ans;
    printf("Enter value of x : ");
    scanf("%f",&num);
    ans=sin(1/num);
    printf("The sin(1/x) is : %f",ans);
}