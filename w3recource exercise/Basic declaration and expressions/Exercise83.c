#include<stdio.h>
int main()
{
    int num,rem,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        if(rem==3)
        {
            count++;
        }
    }
    printf("Number of threes in number %d",count);
    
}