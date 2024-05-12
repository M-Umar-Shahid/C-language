#include <stdio.h>
int main()
{
    int array[5], choice;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter elment-%d of array : ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nElment-%d of array is: %d", i, array[i]);
    }
    printf("\nEnter the element index number you want to delete : ");
    scanf("%d", &choice);
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == array[choice])
        {
            continue;
        }
        else
        {
            printf("\nElment-%d of array is: %d", i, array[i]);
        }
    }
}