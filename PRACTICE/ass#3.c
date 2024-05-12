#include <stdio.h>
#include <stdlib.h>

void get_marks(int *marks, int size);
int total_marks(int *marks, int size);
void show_marks(int *marks, int size);

#define SIZE 5

int main()
{
    //initializing variables and array
    int i,j,c;
    int marks[SIZE];
    int total;

    //while loop to give option to user to run this again
    while(j!=0)
    {
    //First Function Called
    get_marks(marks,SIZE);

    //Second Function Called
    total = total_marks(marks, SIZE); //Return value of function will be stored in total
    printf("\n\n  **********RESULT**********");
    printf("\n\n      Total Marks = %d\n",total); //Printing Total Marks

    //Third Function Called
    show_marks(marks,SIZE);

    //asking user choice of running it again
    printf("\n\n\n  Enter 1 For Running this Program Again\n  Enter Anything Else to Exit:  ");
    scanf("%d",&c);

    //checking users choice
    if(c!=1)
    {
        j=0;
    }
    }

    printf("\n");
    return 0;
//end of main
}
void get_marks(int *marks, int size)
{
    //initializing index counter
    int i;

    //Telling user the range of marks
    printf("\n Enter Marks between 0 and 100\n");

    //This for loop will be used to get marks for each subject
    for(i=1;i<=size;i++)
    {
        printf("\n   Marks in Subject %d: ",i);
        scanf("%d",marks);

        //Checking the range of marks
        while((*marks <0) || (*marks > 100))
        {
        printf("   INVALID MARKS!\n");
        printf("\n Enter Marks in Subject %d AGAIN: ",i);
        scanf("%d",marks);
        }

        //Adding one to go to next memory location
        *marks++;
    }

    //end of get_marks
}

int total_marks(int *marks, int size)
{
    //initializing variables
    int i;
    int total = 0;

    //For loop to add all the elements of the array
    for(i=0;i<size;i++)
    {
        //adding marks of each subject to total variable
        total = total + *marks;

        //next memory location
        *marks++;
    }
    return total;
    //end of total_marks
}

void show_marks(int *marks, int size)
{
    //initializing variable
    int i;
    printf("\n   Marks in Each Subject: \n");

    //For loop to get values from each element
    for(i=0;i<SIZE;i++)
    {
        printf("\n    Subject %d %10d",i+1,*marks);
        *marks++;
    }

    //end of show_marks
}

