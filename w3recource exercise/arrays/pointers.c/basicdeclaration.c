// Exercise 1

// #include<stdio.h>
// int main()
// {
//     int b=10;
//     int *a =&b;
//     printf("%p",a);
//     printf("\n%d",&b);
// }


// Exercise 2


// #include<stdio.h>
// int main()
// {
//     int m=10;
//     int *z=&m;
//     printf("\nThe address of m variable is : %p",&m);
//     printf("\nThe address of m variable is : %p",z);
//     printf("\nThe value of m variable is : %d",*z);
//     printf("\nThe value of m variable is : %d",m);
//     *z=5;
//     printf("\nThe value of m variable is : %d",m);
    
// }

// Exercise 3
#include<stdio.h>
int main()
{
    int num=15;
    char z='z';
    float fl=15.4;

    int *integar=&num;
    char *character=&z;
    float *point=&fl;

    printf("The value of num is %d",num);
    printf("The value of num is %c",z);
    printf("The value of fl is %.2f",fl);
    
    printf("The address of num is %d",&num);
    printf("The address of num is %c",&z);
    printf("The address of fl is %.2f",&fl);
}