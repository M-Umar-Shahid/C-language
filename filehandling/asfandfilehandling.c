#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>

struct record
{
    char sid[50];
    char name[50];
    char city_name[50];
    char subject_name[50];
    char program_name[50];
    char country_name[50];
    int marks;
}
student[100];

void print_output (int loop_count);
void search_record_by_id (char sid[50], int loop_count);
void search_record_by_name(char name[50], int loop_count);
void search_record_by_city_name(char city[50], int loop_count);
void search_record_by_subject(char subject[50], int loop_count);
void search_record_by_program_name(char program_name[50], int loop_count);
void search_record_by_country_name(char country_name[50], int loop_count);


int main()
{
    system("Color 8F");


    int no_of_records , loop_count=0 , next_functionality , search_choice , marks , choice ;
    char city[50];
    char country[50];
    char name[50];
    char sid[50];
    char subject[50];
    char program[50];


    printf("\n\n\n\n\n\n\n\n      \t\t\t********\n    \t\t\t*\t\t     \n    \t\t\t\t\t     \n      \t\t\t   STUDENT PORTAL   * \n   \t\t\t*\t\t     \n    \t\t\t\t\t     \n     \t\t\t*******\n\n\n\n\n\n");

    system("pause");
    system("cls");

    FILE*fptr;
    fptr=fopen("portal.txt","w");

    while ( choice != -1 )
    {


    printf( "\n\t\tEnter the Student ID:  " );
    fflush(stdin);
    gets(student[loop_count].sid);
    fputs(student[loop_count].sid,fptr);


    printf( "\n\t\tEnter the name of the student:  " );
    gets(student[loop_count].name);
    fputs(student[loop_count].name,fptr);

    printf( "\n\t\tEnter the Country name:  " );
    gets(student[loop_count].country_name);
    fputs(student[loop_count].country_name,fptr);


    printf( "\n\t\tEnter the City name:  " );
    gets(student[loop_count].city_name);
    fputs(student[loop_count].city_name,fptr);


    printf( "\n\t\tEnter the Program name:  " );
    gets(student[loop_count].program_name);
    fputs(student[loop_count].program_name,fptr);


    printf( "\n\t\tEnter Subject name:  " );
    gets(student[loop_count].subject_name);
    fputs(student[loop_count].subject_name,fptr);

    printf( "\n\t\tEnter the marks of the Student:  " );
    scanf( "%d" , &student[loop_count].marks );
    fprintf(fptr,"%d",student[loop_count].marks);


    loop_count++;
    printf("\n\n\n\nAre you willing to add more entries?\nEnter -1 to stop inserting entries or any key to continue....\n");
    scanf("%d",&choice);

    }

    fclose(fptr);

    system("cls");

    printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
    printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );
    scanf( "%d" , &next_functionality );

    system("cls");

    while(next_functionality!=-1)
    {

    switch (next_functionality)

    {

    case 1:

        print_output(loop_count);

        system("pause");
        system("cls");

        printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
        printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );
        break;

    case 2:

        printf("\n\n\tSelect a reference from which you want to search the record\n\n\t1. \tBy Student ID\n\t2. \tBy Student Name\n\t3. \tBy Country Name\n\t4. \tBy City name \n\t5. \tBy Subject Name\n\t6. \tBy Program Name\n");
        scanf("%d",&search_choice);

        system("cls");

        switch (search_choice)
        {

        case 1:

        printf("\n\t\tEnter the Student ID you want to find the record of: ");
        fflush(stdin);
        gets(sid);
        search_record_by_id ( sid , loop_count );

        system("pause");
        system("cls");

        printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
        printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );

        break;


        case 2:

            printf("\n\t\tEnter the Student Name you want to find the record of: ");
            fflush(stdin);
            gets(name);
            search_record_by_name ( name , loop_count );

            system("pause");
            system("cls");

            printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
            printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );
        break;


        case 3:

        printf("\n\t\tEnter the Country Name you want to find the record of: ");
        fflush(stdin);
        gets(country);
        search_record_by_country_name ( country , loop_count );

        system("pause");
        system("cls");

        printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
        printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );

        break;

        case 4:

            printf("\n\t\tEnter the City Name you want to find the record of: ");
            fflush(stdin);
            gets(city);
            search_record_by_city_name ( city , loop_count );

            system("pause");
            system("cls");

            printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
            printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );

        break;


        case 5:


            printf("\n\t\tEnter the Subject Name you want to find the record of: ");
            fflush(stdin);
            gets(subject);
            search_record_by_subject_name ( subject , loop_count );

            system("pause");
            system("cls");

            printf( "\n\n\tWhich functionality do you want to use next?\n\n" );
            printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );


        break;



        case 6:


                printf("\n\t\tEnter the Program Name you want to find the record of: ");
                fflush(stdin);
                gets(program);
                search_record_by_program_name ( program , loop_count );

                system("pause");
                system("cls");

                printf( "\n\n\t\tWhich functionality do you want to use next?\n\n" );
                printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );


        break;



        default:

        printf( "ERROR......!\tINVALID CHOICE!!!\n" );

        system("pause");
        system("cls");

        break;

        }

        break;


        case 3:

            exit(0);

        case 4:

            choice=0;

            fptr=fopen("portal.txt","w");


             while ( choice != -1 )
    {


    printf( "\n\t\tEnter the Student ID:  " );
    fflush(stdin);
    gets(student[loop_count].sid);
    fputs(student[loop_count].sid,fptr);


    printf( "\n\t\tEnter the name of the student:  " );
    gets(student[loop_count].name);
    fputs(student[loop_count].name,fptr);

    printf( "\n\t\tEnter the Country name:  " );
    gets(student[loop_count].country_name);
    fputs(student[loop_count].country_name,fptr);


    printf( "\n\t\tEnter the City name:  " );
    gets(student[loop_count].city_name);
    fputs(student[loop_count].city_name,fptr);


    printf( "\n\t\tEnter the Program name:  " );
    gets(student[loop_count].program_name);
    fputs(student[loop_count].program_name,fptr);


    printf( "\n\t\tEnter Subject name:  " );
    gets(student[loop_count].subject_name);
    fputs(student[loop_count].subject_name,fptr);

    printf( "\n\t\tEnter the marks of the Student:  " );
    scanf( "%d" , &student[loop_count].marks );
    fprintf(fptr,"%d",student[loop_count].marks);

    loop_count++;
    printf("\n\n\n\nAre you willing to add more entries?\nEnter -1 to stop inserting entries or any key to continue\n");
    scanf("%d",&choice);

    }

    fclose(fptr);

    system("cls");

    printf( " 1.\t\tPress 1 to Print your entered data\n 2.\t\tPress 2 to search a given record\n 3.\t\tPress -1 to exit\n 4.\t\tAdd more entries\n" );


    break;



    default:


        system("pause");
        system("cls");
        printf( "ERROR......!\tINVALID CHOICE!!!\n" );

        break;

    }

    scanf( "%d" , &next_functionality );

    }

    return 0;
}


void print_output (loop_count)
{

    int count;

    printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( count=0 ; count<loop_count ; count++)

    {
        fflush(stdin);
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[count].sid,student[count].name,student[count].country_name,student[count].city_name,student[count].subject_name,student[count].marks,student[count].program_name);
    }

}


void search_record_by_id ( char sid[50] , int loop_count )
{

    FILE* fptr;
    fptr=fopen("portal.txt","r");

    int result , i;

   printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( i=0 ; i<loop_count ; i++)
    {
        result = strcmpi( sid , student[i].sid );

        if ( result == 0 )
        {

         printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[i].sid,student[i].name,student[i].country_name,student[i].city_name,student[i].subject_name,student[i].marks,student[i].program_name);

        }

        else

            printf("\n\t\tNO SUCH RECORD FOUNND.......");

    }

fclose(fptr);

}


void search_record_by_name ( char name[50] , int loop_count )
{

    FILE* fptr;
    fptr=fopen("portal.txt","r");

    int result , i;

    printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( i=0 ; i<loop_count ; i++)
    {
        result = strcmpi( name , student[i].name );

        if ( result == 0 )
        {

        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[i].sid,student[i].name,student[i].country_name,student[i].city_name,student[i].subject_name,student[i].marks,student[i].program_name);

        }

        else
        printf("\n\t\tNO SUCH RECORD FOUNND.......\n\n\n\n\n\n\n\n\n\n\n");

    }


    fclose(fptr);

}


void search_record_by_city_name ( char city[50] , int loop_count )
{
    FILE* fptr;
    fptr=fopen("portal.txt","r");

    int result , i;

    printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( i=0 ; i<loop_count ; i++)
    {
        result = strcmpi( city , student[i].city_name );

        if( result == 0 )
        {

         printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[i].sid,student[i].name,student[i].country_name,student[i].city_name,student[i].subject_name,student[i].marks,student[i].program_name);

        }
        
         else
        printf("\n\t\tNO SUCH RECORD FOUNND.......\n\n\n\n\n\n\n\n\n\n\n");

    }

    fclose(fptr);

}


void search_record_by_subject_name ( char subject[50] , int loop_count )
{

    FILE* fptr;
    fptr=fopen("portal.txt","r");

    int result , i;

    printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( i=0 ; i<loop_count ; i++)
    {
        result = strcmpi( subject , student[i].subject_name );

        if( result == 0 )
        {

        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[i].sid,student[i].name,student[i].country_name,student[i].city_name,student[i].subject_name,student[i].marks,student[i].program_name);

        }

         else
        printf("\n\t\tNO SUCH RECORD FOUNND.......\n\n\n\n\n\n\n\n\n\n\n");
        
    }

    
    

    fclose(fptr);

}



void search_record_by_program_name ( char program[50] , int loop_count )
{

    FILE* fptr;
    fptr=fopen("portal.txt","r");

    int result , i;

    printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( i=0 ; i<loop_count ; i++)
    {
        result = strcmpi( program , student[i].program_name );

        if( result == 0 )
        {

         printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[i].sid,student[i].name,student[i].country_name,student[i].city_name,student[i].subject_name,student[i].marks,student[i].program_name);

        }

        
         else
        printf("\n\t\tNO SUCH RECORD FOUNND.......\n\n\n\n\n\n\n\n\n\n\n");
        
    }


    fclose(fptr);

}



void search_record_by_country_name ( char country[50] , int loop_count )
{

    FILE* fptr;
    fptr=fopen("portal.txt","r");

    int result , i;

    printf( "\n\nSt.ID\t\t St.Name\t\tCountry\t\t City\t\t Sub.\nMarks\t\t Prog.\n\n" );

    for ( i=0 ; i<loop_count ; i++)
    {
        result = strcmp( country , student[i].country_name );

        if( result == 0 )
        {

        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\n%d\t\t%s\n\n",student[i].sid,student[i].name,student[i].country_name,student[i].city_name,student[i].subject_name,student[i].marks,student[i].program_name);


        }

         else
        printf("\n\t\tNO SUCH RECORD FOUNND.......\n\n\n\n\n\n\n\n\n\n\n");
        
    }



    fclose(fptr);

}