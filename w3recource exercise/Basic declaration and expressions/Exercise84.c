#include<stdio.h>
int main()
{
    int num,total=0,count=0;
    do
    {
        printf("Enter a number(888 to exit) : ");
        scanf("%d",&num);
        if (num==888)
        {
            break;
        }
        total=total+num;
        count++;
    } while (num!=888);
    printf("The average of entered numbers is : %.2f",(float)total/(float)count);
}