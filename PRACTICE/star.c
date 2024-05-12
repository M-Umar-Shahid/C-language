#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <=i; j++)
        {
            
            if(i==0)
                printf("*");
            if(i==1)
                printf("#");
            if(i==2)
                printf("@");
            if(i==3)
                printf("!");
            if(i==4)
                printf("&");
            if(i==5)
                printf("/");
            if(i==6)
                printf("+");
            if(i==7)
               printf("-");
            if(i==8)
                printf("*");
            if(i==9)
                printf("*");
            if(i==10)
                printf("*");
            
            
        }
        printf("\n");
    }
}