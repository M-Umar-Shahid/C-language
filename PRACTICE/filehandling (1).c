#include<stdio.h>
#include<stdlib.h>
int main()
{
    int b;
    char c,a='i';
    char str[10]="umar";
    // printf("Enter a string");
    // gets(string);
    FILE *ptr;
    ptr=fopen("first.txt","w");
    // fprintf(ptr,"%s",str);
    // fscanf(ptr,"%d" ,&b);
    // printf("the content is %d",b);
    fputc(a,ptr);
    fputs(str,ptr);
    // c=fgetc(ptr);
    // printf("the character i read is %c",c);
    // fgets(str,4,ptr);
    // printf("the string is %s",str);
    



}