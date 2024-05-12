#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    int marks[2][4] = {{3, 4, 5, 6}, {24, 4, 5, 7}};
    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 4; j++)
        {

            printf(" %d ", marks[i][j]);
        }
    printf("\n");
    }
}