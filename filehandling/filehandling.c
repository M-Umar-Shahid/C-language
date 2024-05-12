#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// functions

void inputData();
void displayData();
void addData();
void edit();
void delete ();

// searching functions

void search();
void searchbyname();
// void searchbyregNo();
// void searchbycity();
// void searchbysubject();
// void searchbyprogram();
// void searchbycountry();

// structure

typedef struct studentInformation
{
    char name[20];
    int marks;
    char city[20];
    char registrationNo[20];
    char subject[20];
    char program[20];
    char country[20];
} student;
student st[100];

// main

int main()

{
    int noOfRecords = 0, menu;
    do
    {
        system("cls");
        printf("\n1 - To write data\n2 - To see data in the file\n3 - To add data\n4 - To search data\n5 - To edit data\n6 - To delete data\n7 - To exit\nEnter your choice : ");
        scanf("%d", &menu);
        FILE *fptr;

        switch (menu)
        {
        case 1:
        {
            // Taking input
            inputData();
            break;
        }
        case 2:
        {
            // Displaying output
            system("cls");
            displayData();
            break;
        }

        case 3:
        {
            // appending data in file
            addData();
            break;
        }

        case 4:
        {
            // search
            search();
        }
        case 5:
        {
            edit();
            break;
        }
        case 6:
        {
            delete();
            break;
        }
        case 7:
        {
            exit(0);
        }
        }

    } while (menu != 7);
    return 0;
}
void inputData()
{
    FILE *fptr;
    int i = 0, terminate;

    fptr = fopen("struct.txt", "w");
    do
    {
        system("cls");
        fflush(stdin);
        printf("Enter name of student : ");
        gets(st[i].name);
        printf("Enter name of city of student : ");
        gets(st[i].city);
        printf("Enter registration number  of student : ");
        gets(st[i].registrationNo);
        printf("Enter subject name  of student : ");
        gets(st[i].subject);
        printf("Enter marks  of student : ");
        scanf("%d", &st[i].marks);
        fflush(stdin);
        printf("Enter program of student : ");
        gets(st[i].program);
        printf("Enter name of country of student : ");
        gets(st[i].country);
        printf("\n\n");
        fflush(stdin);
        fwrite(&st[i], sizeof(student), 1, fptr);
        printf(" Do you want to continue input \n press any other key to continue\n (-1 to terminate input): ");
        scanf("%d", &terminate);
        i++;
    } while (terminate != -1);
    fclose(fptr);
}
void displayData()
{
    int i = 0, count;
    FILE *fp;
    fp = fopen("struct.txt", "r");
    while (!feof(fp))
    {
        fgetc(fp);
    }
    count = ftell(fp) / sizeof(student);
    fclose(fp);
    int back;
    FILE *fptr;
    fptr = fopen("struct.txt", "r");
    char temp;
    // char str[20];
    student record;
    system("cls");
    if (fptr == NULL)
    {
        printf("No data found!");
        return;
    }
    else
    {
        printf("\nThe data in the file\n\n");
        while (i < count)
        {
            // fgets(str, strlen("The data of student 1")+1, fptr);
            fread(&record, sizeof(student), 1, fptr);
            printf("NAME %5s\n", record.name);
            printf("REGISTRATION NUMBER %5s\n", record.registrationNo);
            printf("CITY %5s\n", record.city);
            printf("SUBJECT %5s\n", record.subject);
            printf("MARKS %5d\n", record.marks);
            printf("PROGRAM %5s\n", record.program);
            printf("COUNTRY %5s\n", record.country);
            i++;
        }
    }
    fclose(fptr);
    do
    {
        printf("\n\nPress 0 to go back to the menu : ");
        fflush(stdin);
        scanf("%d", &back);
        if (back != 0)
        {
            printf("Invalid key\n");
        }
    } while (back != 0);
}
void addData()
{
    int terminate;
    FILE *fptr, *fp;
    fptr = fopen("struct.txt", "a");
    fp = fopen("struct.txt", "r");
    int i;
    while (!feof(fp))
    {
        fgetc(fp);
    }
    i = ftell(fp) / sizeof(student);
    fclose(fp);
    do
    {
        fflush(stdin);
        system("cls");
        fflush(stdin);
        printf("Enter name of student : ");
        gets(st[i].name);
        printf("Enter name of city of student : ");
        gets(st[i].city);
        printf("Enter registration number  of student : ");
        gets(st[i].registrationNo);
        printf("Enter subject name  of student : ");
        gets(st[i].subject);
        printf("Enter marks  of student : ");
        scanf("%d", &st[i].marks);
        fflush(stdin);
        printf("Enter program of student : ");
        gets(st[i].program);
        printf("Enter name of country of student : ");
        gets(st[i].country);
        printf("\n\n");
        fflush(stdin);
        fwrite(&st[i], sizeof(student), 1, fptr);
        printf(" Do you want to continue input \n press any other key to continue\n (-1 to terminate input): ");
        scanf("%d", &terminate);
        i++;
    } while (terminate != -1);
    fclose(fptr);
}
void search()
{
    int choice;
    printf("In which category you want to search the data\n");
    printf("PRESS\n 1 : name of student\n");
    // printf(" 2 : registration number of student\n");
    // printf(" 3 : city of student\n");
    // printf(" 4 : subject of student\n");
    // printf(" 5 : program of student\n");
    // printf(" 6 : country of student\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        searchbyname();
        break;
    }
        // case 2:
        // {
        //     searchbyregNo();
        //     break;
        // }
        // case 3:
        // {
        //     searchbycity();
        //     break;
        // }
        // case 4:
        // {
        //     searchbysubject();
        //     break;
        // }
        // case 5:
        // {
        //     searchbyprogram();
        //     break;
        // }
        // case 6:
        // {
        //     searchbycountry();
        //     break;
        // }
        // }
    }
}
void searchbyname()
{
    char info[100];
    FILE *fptr, *fp;
    student record;
    fptr = fopen("struct.txt", "r");
    char name[25];
    int flag = 0;
    printf("\nEnter the name of the student : ");
    fflush(stdin);
    gets(name);
    fp = fopen("struct.txt", "r");
    int count;
    while (!feof(fp))
    {
        fgetc(fp);
    }
    count = ftell(fp) / sizeof(student);
    fclose(fp);
    for (int i = 0; i < count; i++)
    {
        fread(&record, sizeof(student) + 1, 1, fptr);
        if ((strcmpi(name, record.name)) == 0)
        {
            printf("NAME %5s\n", record.name);
            printf("REGISTRATION NUMBER %5s\n", record.registrationNo);
            printf("CITY %5s\n", record.city);
            printf("SUBJECT %5s\n", record.subject);
            printf("MARKS %5d\n", record.marks);
            printf("PROGRAM %5s\n", record.program);
            printf("COUNTRY %5s\n", record.country);
            printf("\n\n");
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("No data found!");
    }
    getch();
    fclose(fptr);
}
void edit()
{
    FILE *fptr, *fp, *fp1;
    student record, s1;
    char name[25];
    int flag = 0;
    printf("\nEnter the name of the student whose record you want to edit : ");
    fflush(stdin);
    gets(name);
    fp = fopen("struct.txt", "r");
    int count;
    while (!feof(fp))
    {
        fgetc(fp);
    }
    count = ftell(fp) / sizeof(student);
    fclose(fp);
    fptr = fopen("struct.txt", "r");
    fp1 = fopen("temp.txt", "w");
    for (int i = 0; i < count; i++)
    {
        fread(&record, sizeof(student), 1, fptr);
        if ((strcmpi(name, record.name)) == 0)
        {
            system("cls");
            fflush(stdin);
            printf("Enter new name of student : ");
            gets(record.name);
            printf("Enter new name of city of student : ");
            gets(record.city);
            printf("Enter new registration number  of student : ");
            gets(record.registrationNo);
            printf("Enter new subject name  of student : ");
            gets(record.subject);
            printf("Enter new marks  of student : ");
            scanf("%d", &record.marks);
            fflush(stdin);
            printf("Enter new program of student : ");
            gets(record.program);
            printf("Enter new name of country of student : ");
            gets(record.country);
            printf("\n\n");
            fflush(stdin);
            flag = 1;
        }
        fwrite(&record, sizeof(student), 1, fp1);
    }
    fclose(fp1);
    fclose(fptr);

    if (flag)
    {
        fp1 = fopen("temp.txt", "r");
        fptr = fopen("struct.txt", "w");

        while (fread(&s1, sizeof(student), 1, fp1))
        {
            fwrite(&s1, sizeof(student), 1, fptr);
        }

        fclose(fp1);
        fclose(fptr);
    }
    else
    {
        printf("No data found!");
    }
    fclose(fptr);
    getch();
}
void delete ()
{
    FILE *fptr, *fp, *fp1;
    student record, s1;
    char name[25];
    int flag = 0;
    printf("\nEnter the name of the student whose record you want to delete : ");
    fflush(stdin);
    gets(name);
    fp = fopen("struct.txt", "r");
    int count;
    while (!feof(fp))
    {
        fgetc(fp);
    }
    count = ftell(fp) / sizeof(student);
    fclose(fp);
    fptr = fopen("struct.txt", "r");
    fp1 = fopen("temp.txt", "w");
    for (int i = 0; i < count; i++)
    {
        fread(&record, sizeof(student), 1, fptr);
        if ((strcmpi(name, record.name)) == 0)
        {
            flag = 1;
        }
        else
        {
            fwrite(&record, sizeof(student), 1, fp1);
        }
    }
    fclose(fp1);
    fclose(fptr);

    if (flag)
    {
        fp1 = fopen("temp.txt", "r");
        fptr = fopen("struct.txt", "w");

        while (fread(&s1, sizeof(student), 1, fp1))
        {
            fwrite(&s1, sizeof(student), 1, fptr);
        }

        fclose(fp1);
        fclose(fptr);
    }
    else
    {
        printf("No data found!");
    }
    fclose(fptr);
    getch();
}

// void searchbyregNo()
// {
//     char registrationNo[20];
//     int flag = 0;
//     FILE *fptr;
//     fptr = fopen("struct.txt", "r");
//     printf("\nEnter the registration number of the student : ");
//     fflush(stdin);
//     gets(registrationNo);
//     printf("\n\nThe required data of the student is \n\n\n");
//     for (int i = 0; !feof(fptr); i++)
//     {
//         if (strcmpi(registrationNo, st[i].registrationNo) == 0)
//         {
//             printf("NAME\t\t\t\t%s\n", st[i].name);
//             printf("REGISTRATION NUMBER\t\t%s\n", st[i].registrationNo);
//             printf("CITY NAME\t\t\t%s\n", st[i].city);
//             printf("SUBJECT NAME\t\t\t%s\n", st[i].subject);
//             printf("MARKS\t\t\t\t%d\n", st[i].marks);
//             printf("\n\n");
//         }
//         else if (flag == 0)
//             flag = 1;
//         {

//             printf("No data found!");
//             exit(0);
//         }
//     }
//     fclose(fptr);
// }

// void searchbycity()
// {
//     char city[20];
//     int flag = 0;
//     FILE *fptr;
//     fptr = fopen("struct.txt", "r");
//     printf("\nEnter the city of the student : ");
//     fflush(stdin);
//     gets(city);
//     printf("The required data of the student is \n\n\n");
//     for (int i = 0; !feof(fptr); i++)
//     {
//         if (strcmpi(city, st[i].city) == 0)
//         {
//             printf("NAME\t\t\t\t%s\n", st[i].name);
//             printf("REGISTRATION NUMBER\t\t%s\n", st[i].registrationNo);
//             printf("CITY NAME\t\t\t%s\n", st[i].city);
//             printf("SUBJECT NAME\t\t\t%s\n", st[i].subject);
//             printf("MARKS\t\t\t\t%d\n", st[i].marks);
//             printf("PROGRAM\t\t\t\t%s\n", st[i].program);
//             printf("COUNTRY\t\t\t\t%s\n", st[i].country);
//             printf("\n\n");
//             flag = 1;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("No data found!");
//         exit(0);
//     }
//     fclose(fptr);
// }

// void searchbysubject()
// {
//     char subject[20];
//     int flag = 0;
//     FILE *fptr;
//     fptr = fopen("struct.txt", "r");
//     printf("\nEnter the subject of the student : ");
//     fflush(stdin);
//     gets(subject);
//     printf("The required data of the student is \n\n\n");
//     for (int i = 0; !feof(fptr); i++)
//         if ((strcmpi(subject, st[i].subject) == 0))
//         {
//             printf("NAME\t\t\t\t%s\n", st[i].name);
//             printf("REGISTRATION NUMBER\t\t%s\n", st[i].registrationNo);
//             printf("CITY NAME\t\t\t%s\n", st[i].city);
//             printf("SUBJECT NAME\t\t\t%s\n", st[i].subject);
//             printf("MARKS\t\t\t\t%d\n", st[i].marks);
//             printf("PROGRAM\t\t\t\t%s\n", st[i].program);
//             printf("COUNTRY\t\t\t\t%s\n", st[i].country);
//             printf("\n\n");
//             flag = 1;
//         }
//         else if (flag == 0)
//         {
//             printf("No data found!");
//             exit(0);
//         }
//     fclose(fptr);
// }

// void searchbyprogram()
// {
//     char program[20];
//     int flag = 0;
//     FILE *fptr;
//     fptr = fopen("struct.txt", "r");
//     printf("\nEnter the program of the student : ");
//     fflush(stdin);
//     gets(program);
//     printf("The required data of the student is \n\n\n");
//     for (int i = 0; !feof(fptr); i++)
//     {
//         if (strcmpi(program, st[i].program) == 0)
//         {
//             printf("NAME\t\t\t\t%s\n", st[i].name);
//             printf("REGISTRATION NUMBER\t\t%s\n", st[i].registrationNo);
//             printf("CITY NAME\t\t\t%s\n", st[i].city);
//             printf("SUBJECT NAME\t\t\t%s\n", st[i].subject);
//             printf("MARKS\t\t\t\t%d\n", st[i].marks);
//             printf("PROGRAM\t\t\t\t%s\n", st[i].program);
//             printf("COUNTRY\t\t\t\t%s\n", st[i].country);
//             printf("\n\n");
//             flag = 1;
//         }
//         else if (flag == 0)
//         {
//             printf("No data found!");
//             exit(0);
//         }
//         fclose(fptr);
//     }
// }

// void searchbycountry()
// {
//     char country[20];
//     int flag = 0;
//     FILE *fptr;
//     fptr = fopen("struct.txt", "r");
//     printf("\nEnter the country of the student : ");
//     fflush(stdin);
//     gets(country);
//     printf("The required data of the student is \n\n\n");
//     for (int i = 0; !feof(fptr); i++)
//     {
//         if (strcmpi(country, st[i].country) == 0)
//         {
//             printf("NAME\t\t\t\t%s\n", st[i].name);
//             printf("REGISTRATION NUMBER\t\t%s\n", st[i].registrationNo);
//             printf("CITY NAME\t\t\t%s\n", st[i].city);
//             printf("SUBJECT NAME\t\t\t%s\n", st[i].subject);
//             printf("MARKS\t\t\t\t%d\n", st[i].marks);
//             printf("PROGRAM\t\t\t\t%s\n", st[i].program);
//             printf("COUNTRY\t\t\t\t%s\n", st[i].country);
//             printf("\n\n");
//             flag = 1;
//         }
//         else if (flag == 0)
//         {
//             printf("No data found!");
//             exit(0);
//         }
//         fclose(fptr);
//     }
// }
