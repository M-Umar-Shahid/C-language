#include<stdio.h>
#include<math.h>
int main()
{
    int num,a;
    printf("Enter a number of range : ");
    scanf("%d",&num);
    printf("Square of Even number between 1 and %d",num);
    for (int i = 1; i <= num; i++)
    {
        if(i%2==0)
        {
            a=pow(i,2);
            printf("%d ^ 2 = %d\n",i,a);
        }
    }
    printf("Square of odd number between 1 and %d",num);
    for (int i = 1; i <= num; i++)
    {
        if(i%2!=0)
        {
            a=pow(i,2);
            printf("%d ^ 2 = %d\n",i,a);
        }
    }
    
}