#include<stdio.h>
#include<stdlib.h>
int binarysearch(int array[],int high,int num,int low);
int main()
{
    int temp,num;
    int array[] = {4,3,2,7,9,45,89,12,45,67};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (array[j]<array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
    }
    printf("\nThe sorted array is \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ",array[i]);
    }
    int high = sizeof (array)/sizeof(array[0]);
    int low = 0;
    int mid = (high + low)/2;
    printf("\nEnter the number you want to search : ");
    scanf("%d",&num);
    int result;
    result = binarysearch(array,high,num,low);
    printf("%d",result);
}
int binarysearch(int array[],int high,int num,int low)
{
    int mid = (high + low)/2;
    if (array[mid]==num)
    {
        return mid;
    }
    else if(num<array[mid])
    {
        binarysearch(array,mid,num,low);
    }
    else if(num>array[mid])
    {
        binarysearch(array,high,num,mid);
    }
    
}