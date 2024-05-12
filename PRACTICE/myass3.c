#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void get_marks(int *marks, int size);
int total_marks(int *marks, int size);
void show_marks(int *marks, int size);

int main()
{
    int marks[SIZE];
    int k, total,average;
    while(k!=1)
    {
        get_marks(marks, SIZE);
        total = total_marks(marks, SIZE);
        printf("Total marks are %d\n", total);
        show_marks(marks, SIZE);
        average=total/SIZE;
        printf("Average marks are %d\n",average );

        printf("Enter 1 to terminate the calculation or anyother key to continue");
        scanf("%d",&k);
    };
}

void get_marks(int *marks, int size)
{
    int i;

    for (i = 1; i <= size; i++)
    {
        printf("Enter marks in subject %d from 0 to 100\n", i);
        scanf("%d", marks);
        while (*marks < 0 || *marks > 100)
        {
            printf("Entered marks are incorrect \nEnter marks in subject %d again", i);
            scanf("%d", marks);
        }

        *marks++;
    }
}

total_marks(int *marks, int size)

{
    int i, total = 0;
    for (i = 0; i < size; i++)
    {
        total = total + *marks;
        *marks++;
    }
    return total;
}

void show_marks(int *marks, int size)
{
    int i;
    for (i = 1; i <= size; i++)
    {
        printf("Marks in subject %d are %5d\n", i, *marks);
        *marks++;
    }
}
