#include <stdio.h>
int main()
{
    int input_days, years, weeks, days, rem;
    printf("Enter number of days : ");
    scanf("%d", &input_days);
    years = input_days / 365;
    rem = input_days % 365;
    printf("YEARS : %d\n", years);
    weeks = rem / 7;
    printf("WEEKS : %d\n", weeks);
    rem = rem % 7;
    days = rem;
    printf("DAYS : %d\n", days);
}