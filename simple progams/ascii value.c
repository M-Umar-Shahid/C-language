#include <stdio.h>
#include<math.h>
int main()
{
    int b;
    char a;
    printf("enter a character:");
    scanf("%c",&a);
    printf("the ascii value for the entered character is %d\n",a);
    b=a;
    if (b>=97 && b<=122)
    {
        printf("the entered character is a small alphabet");

    }
    if (b>=48 && b<=57)
    {
        printf("the entered value is a digit");
    }
    if (b>=65 && b<=90)
    {
        printf("the entered value is a capital alphabet");
    }
    else
    {
        printf("the entered value is a special character");
    }
    return 0;
}