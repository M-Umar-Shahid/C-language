#include <Stdio.h>
void triangle(rows)
{
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_triangle(rows)
{
    int i,j;
     for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



int main()
{
    int type, rows;
    printf("\tenter 0 for triangle \n\tenter 1 for reverse triangle");
    scanf("%d", &type);
    printf("enter number of rows");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
    {
        triangle(rows);
    }
    case 1:
    {
        reverse_triangle(rows);
    }
    }
}