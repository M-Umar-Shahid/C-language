#include <stdio.h>
#include<math.h>
int main()
{
    int j,a = 1;
    float sum = 1;
    for (int i = 3; i <= 7; i = i + 2)
    {
        j=pow(2,a);
        a++;
        printf("%d/%d",i,j);
        sum = sum + ((float)i / (float)j);
    }
    printf("The sum is : %.2f", sum);
}