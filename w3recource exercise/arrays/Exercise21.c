#include <stdio.h>
int main()
{
    int row1, row2, coloumn1, coloumn2, row, coloumn, sum;
    do
    {
        printf("Enter number of rows of first matrix : ");
        scanf("%d", &row1);
        printf("Enter number of coloumns of first matrix : ");
        scanf("%d", &coloumn1);
        printf("Enter number of rows of second matrix : ");
        scanf("%d", &row2);
        printf("Enter number of coloumns of second matrix : ");
        scanf("%d", &coloumn2);

        if (coloumn1 != row1)
        {
            printf("The matrices are not eligible for multiplication !\n");
            printf("Please enter the values again\n");
        }
    } while (coloumn1 != row2);
    int matrix1[row1][coloumn1], matrix2[row2][coloumn2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coloumn1; j++)
        {
            printf("Enter value of index %d row and %d coloumn : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < coloumn2; j++)
        {
            printf("Enter value of index %d row and %d coloumn : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("------The matrix 1 is below------\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coloumn1; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("------The matrix 2 is below------\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coloumn1; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    printf("------The matrix after multiplication------");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            sum = sum + (matrix1[i][j] * matrix2[j][i]);
        }
    }
}