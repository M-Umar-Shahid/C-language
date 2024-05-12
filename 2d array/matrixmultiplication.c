#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
    int r1, r2, c1, c2, sum = 0;
    do
    {

        printf("Enter number of rows of first element : ");
        scanf("%d", &r1);
        printf("Enter number of columns of first element : ");
        scanf("%d", &c1);
        printf("Enter number of rows of second element : ");
        scanf("%d", &r2);
        printf("Enter number of columns of second element : ");
        scanf("%d", &c2);
        if (c1 != r2)
        {
            printf("The matrices are not elligible for multiplication");
        }

    } while (c1 != r2);
    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int matrix3[r1][c2];

    // taking matrix 1
    system("cls");
    printf("Enter the entries of matrix 1");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("\nEnter value of element %d %d\n", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // taking matrix 2

    printf("Enter the entries of matrix 2");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("\nEnter value of element %d %d\n", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // dislpaying matrix 1
    printf("\n\nMatrix 1 \n\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("  %d  ", matrix1[i][j]);
        }
        printf("\n");
    }
    // dislpaying matrix 2
    printf("\n\nMatrix 2 \n\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("  %d  ", matrix2[i][j]);
        }
        printf("\n");
    }

    //multiplying matrices

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            sum=0;
            for (int k = 0; k < r2; k++)
            {
                sum = sum + matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = sum;
        }
    }

    //displaying resultant matrix

    printf("\n\nMultiplied Matrix\n\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("  %d  ", matrix3[i][j]);
        }
        printf("\n");
    }
}