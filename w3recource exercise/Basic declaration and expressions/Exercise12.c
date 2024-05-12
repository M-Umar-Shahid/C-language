#include<stdio.h>
int main()
{
    unsigned long long employee_id;
    int hours;
    float salary;
    printf("Enter Employee ID : ");
    scanf("%llu",&employee_id);
    printf("Input the working hours : ");
    scanf("%d",&hours);
    printf("Enter your salary amount per hour : ");
    scanf("%f",&salary);
    printf("Employee ID : %llu\n",employee_id);
    printf("Salary : %.2f\n",salary*hours);

}