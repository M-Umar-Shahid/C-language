#include <stdio.h>
void arrayrev(int arr[]);

int main()
{
    int arr[] = {5, 6, 7, 8};
    int i;
    arrayrev(arr);
    for (i = 0; i < 4; i++)
    {
        printf("the reversed array is : %d\n",arr[i]);
    }
}
void arrayrev(int arr[])
{
    int i;
    for (i = 0; i < 4/2; i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[3-i];
        arr[3-i]=temp;
    }
}
