#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pass, w = 10;
    while (w != 0)
    {
        printf("\nEnter your password : \n");
        scanf("%d", &pass);
        if (pass == 1234)
        {
            printf("Correct password");
            w = 0;
        }
        else
        {
            printf("Incorrect password");
        }
    }
}