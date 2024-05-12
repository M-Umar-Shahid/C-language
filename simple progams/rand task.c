#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,num4,num5,num6;
    num1=1+rand()%2;
    printf("first number in the range 1 to 2: %d",num1);
    num2=1+rand()%100;
    printf("\nsecond number in the range 1 to 100 :%d",num2);
    num3=rand()%10;
    printf("\nthird number in the range 0 to 9: %d",num3);
    num4=1000+rand()%113;
    printf("\nfourth number in the range 1000 to 1112: %d",num4);
     num5=-1+rand()%3;
    printf("\nfifth number in the range -1 to 1: %d",num5);
     num6=-3+rand()%15;
    printf("\nsixth number in the range -3 to 11: %d",num6);

    return 0;
}
