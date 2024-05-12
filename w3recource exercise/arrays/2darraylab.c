#include <stdio.h>
#include <string.h>
#define studentStrength 2
#define lengthOfName 20
int main()
{
    // Scanning names of students
    int count1 = 0, count2 = 0, i = 0, j, numberOfSubjects;
    char nameOfStudents[studentStrength][lengthOfName];
    char nameOfSubject[studentStrength][lengthOfName];
    int marksAndRollno[studentStrength][2];
    while (i < studentStrength)
    {
        printf("Press -1 if you want to skip this entry\nEnter your name : ");
        gets(nameOfStudents[i]);
        i++;
        if (nameOfStudents[i] == -1)
        {
            continue;
        }
    }
    // printf("%c",nameOfStudents[1][1]);
    i = 0;
    while (i < studentStrength)
    {
        puts(nameOfStudents[i]);
        i++;
    }
    i = 0;
    // Scanning name of subjects for a student
    while (i < studentStrength)
    {
        printf("Enter name of subject for student %d: ", i + 1);
        gets(nameOfSubject[i]);
        i++;

        // while (i < numberOfSubjects)
        // {
        //     // gets(nameOfSubject[i]);
        //     printf("Enter the name of the subject : ");
        //     gets(nameOfSubject[i]);
        //     puts(nameOfSubject[i]);
    }
    for (i = 0; i < studentStrength; i++)
    {
        printf("Enter marks of student %d in the subject : ", i + 1);
        scanf("%d", &marksAndRollno[i][0]);
        printf("Enter Roll no. of student %d : ", i + 1);
        scanf("%d", &marksAndRollno[i][1]);
    }
    // printing
    printf("\n\n\t***********THE ENTERED DATA**************\n");
    for (i = 0; i < studentStrength; i++)
    {
        printf("\tThe data for the student %d \n", i+1);
        printf("\t__________________________________________________\n\n\n");
        printf("\t | Type of Data\t\t\t|\tGiven Data \n\n\n");
        printf("\t | Name of Student\t\t|\t%s   \n", nameOfStudents[i]);
        printf("\t | Name of Subject\t\t|\t%s   \n", nameOfSubject[i]);
        printf("\t | Marks in Subject\t\t|\t%d  \n", marksAndRollno[i][0]);
        printf("\t | Marks in Subject\t\t|\t%d  \n", marksAndRollno[i][1]);
        printf("\t__________________________________________________\n\n\n");
    }
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // char nameOfSubject[numberOfSubjects][studentStrength];
    // }
    // printf("\nEnter name of subject : ");
    // gets(nameOfStudents[1]);

    // int string2[size][size];
    // for (i = 0; i < studentStrength; i++)
    // {
    //     for (j = 0; j < lengthOfName - 1; j++)
    //     {
    //         scanf(" %c", &nameOfStudents[i][j]);
    //         count1++;
    //         if (nameOfStudents[i][j] == '\n')
    //         {
    //             break;
    //         }
    //     }
    //     if (nameOfStudents[i][j] == '\n')
    //     {
    //         break;
    //     }
    // }

    // for (i = 0; i < studentStrength; i++)
    // {
    //     for (j = 1; j < lengthOfName; j++)
    //     {
    //         scanf(" %c", &nameOfStudents[i][j]);
    //         count2++;
    //         if (nameOfStudents[i][j] == '\n')
    //         {
    //             break;
    //         }
    //     }
    //     if (nameOfStudents[i][j - 1] == '\n')
    //     {
    //         break;
    //     }
    // }
    // PRINTING
    // puts(nameOfStudents[1]);
    // for (i = 0; i < studentStrength; i++)
    // {
    //     for (j = 0; j < lengthOfName - 1; j++)
    //     {
    //         printf("%c", nameOfStudents[i][j]);
    //     }
    // }
    // for (i = 0; i < studentStrength; i++)
    // {
    //     for (j = 1; j < lengthOfName; j++)
    //     {
    //         printf("%c", nameOfStudents[i][j]);
    //     }
    // }
}