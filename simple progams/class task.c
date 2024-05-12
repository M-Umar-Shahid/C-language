#include <stdio.h>
int main()
{
    int married_status, age;
    float tax, salary;
    char gender;
    printf("Enter your gender\nM for male\nF for female");
    gender = getchar();
    printf("Enter your salary");
    scanf("%f", &salary);
    if (gender == 'm' || gender == 'M')
    {
        printf("Enter if you are married or not\n1:for married\n2:for unmarried");
        scanf("%d", &married_status);
        if (married_status == 1)
        {
            tax = salary * 0.2;
            printf("The amount of tax on your salary is %.2f", tax);
        }
        else
        {
            tax = salary * 0.25;
            printf("The amount of tax on your salary is %.2f", tax);
        }
    }
    if (gender == 'f' || gender == 'F')
    {
        printf("Enter your age");
        scanf("%d", &age);
        if (age > 25)
        {
            tax = salary * 0.3;
            printf("The amount of tax on your salary is %.2f", tax);
        }
        else
        {
            tax = salary * 0.25;
            printf("The amount of tax on your salary is %.2f", tax);
        }
    }
}