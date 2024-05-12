#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double hyp(double x,double y);
int add(a,b)
{
    int e;
    e=a+b;
    return e;
}
int sub(a,b)
{
    int e;
    e=a-b;
    return e;
}
int multi(a,b)
{
    int e;
    e=a*b;
    return e;
}
int divi(a,b)
{
    int e;
    e=a/b;
    return e;
}
int mod(a,b)
{
    int e;
    e=a%b;
    return e;
}

int main()
{
    double a,b,h;

    printf("enter perpendicular and base");
    scanf("%lf %lf",&a,&b);
    h=hyp(a,b);
    printf("the hypotenuse is %lf",h);

    int c,d,op,ans;

    printf("choose which operation you want to run\n0 for addition\n1 for subtraction\n2 for multiplication\n3 for division\n4 for modulus");
    scanf("%d",&op);
    printf("Enter first numbers");
    scanf("%d",&c);
    printf("Enter second numbers");
    scanf("%d",&d);
    switch(op)
    {
        case(0):
        {
            ans=add(c,d);
            printf("answer is %d",ans);
            break;
        }
                case(1):
        {
            ans=sub(c,d);
            printf("answer is %d",ans);
            break;
        }
               case(2):
        {
            ans=multi(c,d);
            printf("answer is %d",ans);
            break;
        }
              case(3):
        {
            ans=divi(c,d);
            printf("answer is %d",ans);
            break;
        }
              case(4):
        {
            ans=mod(c,d);
            printf("answer is %d",ans);
            break;
        }
    }

     int f,g,i,smallest;
    printf("\nenter first number");
    scanf("%d",&f);
    smallest=f;
    printf("\nenter second number");
    scanf("%d",&g);
    if (g<smallest)
    {
        smallest=g;
    }
    printf("\nenter third number");
        scanf("%d",&i);

        if(i<smallest)
            smallest =i;
        printf("the smallest number is %d",smallest);
    return 0;


}
double hyp(double a,double b)
{
    double hyp;
    hyp=((a*a)+(b*b));
    return sqrt(hyp);
}



