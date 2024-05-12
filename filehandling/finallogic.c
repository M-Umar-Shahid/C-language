#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[20];
    int rollNo;
}umar;
umar st;

void sort(int str[]);
int main()
{
        umar *ptr;
        ptr=&st;
        printf("Enter your name : ");
        gets(ptr->name);
        printf("Your name is %s",ptr->name);
//     int str[] = {5, 3, 1, 7, 8, 9, 10, 42, 3};

//     // int *ptr;
//     // ptr = str;
//     // printf("%p\n", str);
//     // printf("%p", ptr);
//     sort(str);
//     for (int i = 0; i < 9; i++)
//     {
//         printf("%d\n", *(str + i));
//     }
// }
// void sort(int str[])
// {
//     // int size = 9;
//     int hold;
//     // int ptr=str;
//     for (int i = 0; i < 9; i++)
//     {
//         for (int j = i+1; j < 9; j++)
//         {
//             if (*(str + j)<*(str + i))
//             {
//                 hold = *(str + j);
//                 *(str + j) = *(str + i);
//                 *(str + i) = hold;
//             }
            
//         }
//     }


}