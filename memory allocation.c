// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr,n;
//     printf("Enter the number of elements you want : ");
//     scanf("%d",&n);
//     ptr = (int *)malloc(n * sizeof (int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of %d elements you want : ",i);
//         scanf("%d",&ptr[i]);
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of %d Element is %d\n",i,ptr[i]);
        
//     }
    
// }
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the number of elements you want : ");
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof (int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d elements you want : ",i);
        scanf("%d",&ptr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d Element is %d\n",i,ptr[i]);
        
    }
    printf("Enter the number of elements you want : ");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr , n * sizeof (int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d elements you want : ",i);
        scanf("%d",&ptr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d Element is %d\n",i,ptr[i]);
        
    }
    
}