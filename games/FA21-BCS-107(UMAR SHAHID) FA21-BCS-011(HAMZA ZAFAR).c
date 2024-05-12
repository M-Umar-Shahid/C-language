#include <stdio.h>
#include <stdlib.h>

void game_menu()
{
    char play;
    printf("\n\n\t\t\t\tGAME\n\t\t    <----TIC----TAC----TOE---->\n");
    printf("\t\t1-Press enter to start the game\n\t\t");
    fflush(stdin);
    play=getchar();
    if (play == '\n')
    {
        printf("\n\n\t\t\tplayer 1(X)\n\n\t\t\tplayer 2(O)");
        drawboard();
        play_game(play);
    }
    if(play != '\n')
    {
        printf("\n\n\t\tInvalid key!Press a valid key");
        game_menu();
    }

}
void drawboard()
{
    printf("\n\n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t  1     |  2    |  3     \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t_________________________\n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t  4     |  5    |  6     \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t_________________________\n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t  7     |  8    |  9     \n");
    printf("\t\t\t        |       |       \n");
}

void play_game(char play)
{
    int i, place;
    char choice[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (i = 2; i < 11; i++)
    {
        if ((i % 2) == 0)
        {
            place = 0;
            printf("\n\n\t\t\tplayer 1 turn : ");
            scanf("%d", &place);
            choice[place - 1] = 'X';
        }
        else
        {
            place = 0;
            printf("\n\n\t\t\tplayer 2 turn : ");
            scanf("%d", &place);
            choice[place - 1] = 'O';
        }
        show_board(choice);
        if (choice[0] == choice[1] && choice[1] == choice[2] && choice[2] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[3] == choice[4] && choice[4] == choice[5] && choice[5] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[6] == choice[7] && choice[7] == choice[8] && choice[8] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[0] == choice[4] && choice[4] == choice[8] && choice[8] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[2] == choice[4] && choice[4] == choice[6] && choice[6] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[0] == choice[3] && choice[3] == choice[6] && choice[6] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[1] == choice[4] && choice[4] == choice[7] && choice[7] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[2] == choice[5] && choice[5] == choice[8] && choice[8] == 'X')
        {
            printf("\n\t\t\tPLAYER 1 WON");
            break;
        }
        else if (choice[0] == choice[1] && choice[1] == choice[2] && choice[2] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[3] == choice[4] && choice[4] == choice[5] && choice[5] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[6] == choice[7] && choice[7] == choice[8] && choice[8] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[0] == choice[4] && choice[4] == choice[8] && choice[8] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[2] == choice[4] && choice[4] == choice[6] && choice[6] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[0] == choice[3] && choice[3] == choice[6] && choice[6] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[1] == choice[4] && choice[4] == choice[7] && choice[7] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (choice[2] == choice[5] && choice[5] == choice[8] && choice[8] == 'O')
        {
            printf("\n\t\t\tPLAYER 2 WON");
            break;
        }
        else if (i == 10)
        {
            printf("\n\t\t\tGAME DRAW");
        }
    }
}
void show_board(char choice[])
{
    system("cls");

    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t  %c     |  %c    |  %c     \n", choice[0], choice[1], choice[2]);
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t_________________________\n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t  %c     |  %c    |  %c     \n", choice[3], choice[4], choice[5]);
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t_________________________\n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t  %c     |  %c    |  %c     \n", choice[6], choice[7], choice[8]);
    printf("\t\t\t        |       |       \n");
    printf("\t\t\t        |       |       \n");
}

int main()
{
    game_menu();
}
