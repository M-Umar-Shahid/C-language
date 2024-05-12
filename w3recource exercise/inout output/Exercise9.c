#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int operator_choice,num1,num2,answer;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Press 5 for exponent\nEnter your choice : ");
    scanf("%d",&operator_choice);
    if(operator_choice==1)
    {
        answer=num1+num2;
        printf("%d + %d =%d",num1,num2,answer);
    }
    else if(operator_choice==2)
    {
        answer=num1-num2;
        printf("%d - %d =%d",num1,num2,answer);
    }
    else if(operator_choice==3)
    {
        answer=num1*num2;
        printf("%d * %d =%d",num1,num2,answer);
    }
    else if(operator_choice==4)
    {
        answer=num1/num2;
        printf("%d / %d =%d",num1,num2,answer);
    }
    else if(operator_choice==5)
    {
        answer=pow(num1,num2);
        printf("%d ^ %d =%d",num1,num2,answer);
    }
    return 0;
}