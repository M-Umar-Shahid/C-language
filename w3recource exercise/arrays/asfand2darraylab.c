#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    system("Color 8F");

    int i, j, k, a, b, n, l, m, ch;

    printf("Enter the number of students you are willing to enter data of : ");
    scanf("%d", &n);
    printf("\n\n");
    printf("Enter the total number of subjects you want to enter data of : ");
    scanf("%d", &a);
    printf("\n\n");

    int stud[n][1];
    char name[n][50];
    char sub[a][50];

    for (i = 1; i <= n; i++)
    {
        printf(" Enter the name of the student : ");

        for (l = 0; l < 1; l++)
        {
            scanf("%s", &name[n][0]);
        }

        printf("Enter the roll number of student no. %d : ", i);
        scanf("%d", &stud[i][j]);

        for (j = 1; j <= 1; j++)
        {

            printf("\n");

            int marks[a][1];

            printf(" Enter the names of the subject you are going to add numbers of : \n");

            for (m = 0; m < a; m++)
            {
                scanf("%s", &sub[m][0]);
            }

            for (k = 1; k <= a; k++)

            {

                printf("Enter the marks of student no.%d in %d subject : \n", i, k);
                scanf("%d", &marks[k][1]);
            }
        }
    }

    printf("\n\n*** Your entered record is as follows ***");
    printf("Roll number\t\tName\t\tSubject Name\t\tMarks\n");

    return 0;
}