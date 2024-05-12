/*NAME=UMAR SAEED
REGISTRATION NO.=FA21-BSE-090*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    int id;
    int age;
    char first_name[50];
    char last_name[50];
    int salary;
    char gender[50];
};

void add_employee(struct employee emp[])
{
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("\nEnter ID of the no. %d employee : ", i + 1);
        scanf("%d", &emp[i].id);
        printf("\nEnter age of the no. %d employee : ", i + 1);
        scanf("%d", &emp[i].age);
        printf("\nEnter first name of the no. %d employee : ", i + 1);
        fflush(stdin);
        gets(emp[i].first_name);
        printf("\nEnter last name of the no. %d employee : ", i + 1);
        fflush(stdin);
        gets(emp[i].last_name);
        printf("\nEnter salary of the no. %d employee : ", i + 1);
        scanf("%d", &emp[i].id);
        printf("\nEnter gender of the no. %d employee : ", i + 1);
        fflush(stdin);
        gets(emp[i].gender);
    }
    printf("\n\nNO MORE SPACE FOR FUTHER INFORMATION");
}

void disp_employees(struct employee emp[])
{
    int i;
    printf("\n\n\t\tTHE ENTERED INFORMATION OF THE EMPLOYEES ");
    for (i = 0; i < 6; i++)
    {
        printf("\n\n**THE INFORMATION OF EMPLOYEE NO.%d IS*** ", i + 1);
        printf("\nID of the no. %d employee : %d", i + 1, emp[i].id);
        printf("\nAge of the no. %d employee : %d", i + 1, emp[i].age);
        printf("\nFirst name of the no. %d employee : %s", i + 1, emp[i].first_name);
        printf("\nLast name of the no. %d employee : %s", i + 1, emp[i].last_name);
        printf("\nSalary of the no. %d employee : %d", i + 1, emp[i].id);
        printf("\nGender of the no. %d employee : %s", i + 1, emp[i].gender);
    }
}
void search_employee_by_name(char str[50], struct employee emp[])
{
    int i;


    for (i = 0; i < 6; i++)
    {
        if (strcmp(str, emp[i].first_name) == 0)
        {
            printf("\n\nRecord found");
            printf("\nID : %d", i + 1, emp[i].id);
            printf("\nAge: %d", i + 1, emp[i].age);
            printf("\nFirst name of the no. %d employee : %s", i + 1, emp[i].first_name);
            printf("\nLast name of the no. %d employee : %s", i + 1, emp[i].last_name);
            printf("\nSalary of the no. %d employee : %d", i + 1, emp[i].id);
            printf("\nGender of the no. %d employee : %s", i + 1, emp[i].gender);
        }
        else
        {

            printf("\n\nNo record found");
        }
    }
}
void display_older_employees(struct employee emp[])
{
    int i, j;

    for (i = 0; i < 6; i++)
    {
        if (emp[i].age > 50)
        {
            j++;
        }
    }
    printf("\n\nThe number of employees with age more than 50 are %d", j);
}

void sort_numbers_ascending(int number[])
{
    int temp, i, j, k, *fptr;
    for (j = 0; j < 10; ++j)
    {
        for (k = j + 1; k < 10; ++k)
        {
            if (number[j] > number[k])
            {
                temp = number[j];
                number[j] = number[k];
                number[k] = temp;
            }
        }
    }
    fptr = fopen("sort.txt", "a");
    printf("Numbers in ascending order are printed on the file \n");
    for (i = 0; i < 10; ++i)
    {
        fprintf(fptr, "%d\n", number[i]);
    }
    fclose(fptr);
}

int main()
{
    char str[50];
    int i, *fptr, j = 0;
    struct employee emp[5];
    add_employee(emp);
    disp_employees(emp);
    printf("\n\nEnter the first name of employee you want to search : ");
    fflush(stdin);
    gets(str);
    search_employee_by_name(str[50], emp);
    display_older_employees(emp);

    int number[20];

    printf("\nEnter the numbers one by one:");

    for (i = 0; i < 10; ++i)
        scanf("%d", &number[i]);

    sort_numbers_ascending(number);

    return 0;
}
