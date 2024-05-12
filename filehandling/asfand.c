#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sum(int* num1,int *num2);
void print();

int main()
{
    system("Color 8F");
    int num1,num2,result;
    FILE *fptr;
    fptr=fopen("sum.txt","a+");

    printf("Enter number 1: ");
    scanf("%d",&num1);
    fprintf(fptr,"Num 1 is %d\n",num1);

    printf("Enter number 2:  ");
    scanf("%d",&num2);
    fprintf(fptr,"Num2 is %d\n",num2);

    result=sum(&num1,&num2);

    printf("The sum is %d\n",result);
    fprintf(fptr,"Sum is %d\n",result);

    fclose(fptr);
    print();



    return 0;
}

int sum(int*x,int*y)
{
    int sum;
    sum=*x+*y;
    return sum;
}

void print()
{
    FILE *fptr;
    fptr=fopen("sum.txt","r+");
    char c;
    while (fread(&c, sizeof (c),1,fptr))
    {
        putch(c);
    }

}