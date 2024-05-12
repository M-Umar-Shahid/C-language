#include <stdio.h>
int main()
{
    int num, rev=0, rem,num1=1;
    printf("Enter a number : ");
    scanf("%d", &num);
    rem = num % 10;
    num1=num;
    while (num1 != 0)
    {
        rev = (rev * 10) + rem;
        num1=num1/10;
        rem = num1 % 10;
    }
    printf("The reversed number is : %d\n",rev);
    if(rev==num)
    {
        printf("The number is a palindrome");
    }
}