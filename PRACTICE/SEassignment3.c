#include<stdio.h>
#include<stdlib.h>

struct time
{
    int hours,minutes,seconds;
};
void printTime(struct time t)
{
    struct time t;
    printf("Enter number of hours : ");
    scanf("%d",&t.hours);
    printf("Enter number of minutes : ");
    scanf("%d",&t.minutes);
    printf("Enter number of seconds : ");
    scanf("%d",&t.seconds);
    printf("THE ENTERED TIME IS %d : %d : %d ",t.hours,t.minutes,t.seconds);
}
//time AddTime(time t1,time t2);

int main()
{
    struct time c;
    void printTime(c);
    return 0;
}
