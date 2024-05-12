#include<stdio.h>
int main()
{
    printf("x\tx+2\tx+4\tx+6\n___________________________\n");
    for (int i = 1; i < 15; i=i+3)
    {
       printf("%d\t%d\t%d\t%d\n",i,i+2,i+4,i+6);
       
    }
    
}