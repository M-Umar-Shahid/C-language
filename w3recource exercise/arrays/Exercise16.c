#include<stdio.h>
int main()
{
    int size,array[500],min,j;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element of array : ",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("\n%d element of array is : %d",i,array[i]);
    }
        min=array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
            j=min;
        }
    }
    printf("\nThe smallest value in the array is %d",min);
    min=array[0];
    for (int i = 0; i < size; i++)
    {
        if (i==j)
        {
           continue;
        }
        else
        {
            
            if (array[i]<min)
            {
                min=array[i];
            } 
        }
    }
    printf("\nThe second smallest value in array is : %d",min);   
}