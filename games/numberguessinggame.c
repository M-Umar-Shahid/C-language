#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, guessed_number,tries;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("\n\n\tNumber guessing game\n\n\nGuess a number in 10 tries\n");
    // printf("The generated number is : %d\n", num);
    printf("\nGuess a number between 1-100: ");
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
        if(tries ==10)
        {
            printf("You Lose");
            break;
        }
    }
}