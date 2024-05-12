#include <stdio.h>
int main()
{
    int side1, side2, diagonal;
    printf("Input two adjoined sides of the parallelogram:\n");
    scanf("%d %d", &side1, &side2);
    printf("\nInput the diagonal of the parallelogram:\n");
    scanf("%d", &diagonal);
    if (diagonal*diagonal==(side1*side1) + (side2*side2))
    {
        printf("This is a rectangle");
    }
    else
    {
        printf("This is a rhombus");
    }
    
}
