#include<stdio.h>
int main()
{
    for (int i = 65; i < 91; i++)
    {
        printf("[%d,%c] ",i,(char)i);
        if(i%5==0)
        printf("\n");
    }
    for (int i = 97; i < 123; i++)
    {
        printf("[%d,%c] ",i,(char)i);
        if(i%5==0)
        printf("\n");
    }
    
    
}