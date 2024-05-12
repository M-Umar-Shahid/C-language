#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *fptr1,*fptr2;
    char c;
    fptr1 = fopen("program.txt", "r");
    fptr2 = fopen("program2.txt","a");
    do{
        c=getc(fptr1);
        putc(c,fptr2);



    }while(c!= EOF);

}
