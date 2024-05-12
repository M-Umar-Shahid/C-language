#include <stdio.h>
int main()
{
    float amount;
    int one_hundredRs, fifty_Rs, five_Rs, two_Rs,half_Rs,quater_Rs;
    int rem;
    printf("Enter the amount : ");
    scanf("%f", &amount);
    one_hundredRs = amount / 100;
    rem=amount;
    rem = rem % 100;
    printf("\n%d notes of 100\n", one_hundredRs);
    fifty_Rs = rem / 50;
    rem = rem % 50;
    printf("\n%d notes of 50\n", fifty_Rs);
    five_Rs = rem / 5;
    rem = rem % 5;
    printf("\n%d notes of 5\n", five_Rs);
    two_Rs = rem / 2;
    rem = rem % 2;
    printf("\n%d notes of 2\n", two_Rs);
    half_Rs = 2*rem;
    rem = rem % (1/2);
    printf("\n%d notes of 0.5\n", half_Rs);
    quater_Rs = 4*rem;
    rem = rem % (1/4);
    printf("\n%d notes of 0.25\n", quater_Rs);
}