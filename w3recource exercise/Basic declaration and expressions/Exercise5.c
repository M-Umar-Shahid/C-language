#include <stdio.h>
int main()
{
    int area, perimeter, height = 7, width = 5;
    area = height * width;
    perimeter = 2 * (height + width);
    printf("The area of rectangle is : %d\n", area);
    printf("The perimeter of rectangle is : %d", perimeter);
}