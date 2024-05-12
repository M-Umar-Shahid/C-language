#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, guessed_number,tries;
    srand(time(0));
    num = rand() % 10 + 1;
    printf("\n\n\tNumber guessing game (5-tries)\n");
    printf("\nGuess a number between 1-10: ");
    scanf("%d", &guessed_number);
    tries=1;
    while (guessed_number != num)
    {
        if(guessed_number < num)
        {
            printf("Enter a higher number : ");
            scanf("%d",&guessed_number);
        }
        else if(guessed_number > num)
        {
            printf("Enter a lower number : ");
            scanf("%d",&guessed_number);
        }
        tries++;
        if(guessed_number == num)
        {
            printf("You WON(In %d tries)",tries);
            break;
        }
        if(tries ==5)
        {
            printf("You Lose");
            break;
        }
    }
}