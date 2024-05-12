#include <stdio.h>
int main()
{
    int amount, five_thousandRs, rem, one_thousandRs, five_hundredRs, one_hundredRs, fifty_Rs, twenty_Rs, ten_Rs, five_Rs, one_Rs;
    printf("Enter the amount : ");
    scanf("%d", &amount);
    five_thousandRs = amount / 5000;
    rem = amount % 5000;
    printf("\n%d notes of 5000\n", five_thousandRs);
    one_thousandRs = rem / 1000;
    rem = rem % 1000;
    printf("\n%d notes of 1000\n", one_thousandRs);
    five_hundredRs = rem / 500;
    rem = rem % 500;
    printf("\n%d notes of 500\n", five_hundredRs);
    one_hundredRs = rem / 100;
    rem = rem % 100;
    printf("\n%d notes of 100\n", one_hundredRs);
    fifty_Rs = rem / 50;
    rem = rem % 50;
    printf("\n%d notes of 50\n", fifty_Rs);
    twenty_Rs = rem / 20;
    rem = rem % 20;
    printf("\n%d notes of 20\n", twenty_Rs);
    ten_Rs = rem / 10;
    rem = rem % 10;
    printf("\n%d notes of 10\n", ten_Rs);
    five_Rs = rem / 5;
    rem = rem % 5;
    printf("\n%d notes of 5\n", five_Rs);
    one_Rs = rem / 1;
    rem = rem % 1;
    printf("\n%d notes of 1\n", one_Rs);
}