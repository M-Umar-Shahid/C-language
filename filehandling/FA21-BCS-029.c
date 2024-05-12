
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 100
//structure
typedef struct inventory
{
    int record;
    char toolName[30];
    int quantity;
    float cost;
} invent;
//functions

void input();
void output();
void delete ();
void search();
void update();
//main
int main()
{
    //used in switch to select different 
    int menu;
   
//program runs until user enter -1
    do
    {

        system("cls");

        printf("PRESS\n 1. TO INPUT\n 2. TO DISPLAY DATA\n 3. DELETE\n 4. SEARCH\n 5. UPDATE\n-1 TO EXIT\n");
        scanf("%d", &menu);
        switch (menu)
        {
            //caling fuctions in each case
                  case 1:
            input();
            break;
        case 2:
            output();
            break;
        case 3:
            delete ();
            break;
        case 4:
            search();
            break;
        case 5:
            update();
            break;
        }
        

    } while (menu != -1);
    return 0;
}
//input fuctions,
void input()
{
    //initializing default values to struct and storing the address 
    invent *ptr,hardware={0,"",0,0.0};
    ptr = &hardware;

    FILE *cfptr;
//opening a file in update mode
    cfptr = fopen("inventory.txt", "rb+");
    //if NULL then create a new li
    if (cfptr == NULL)
    {
        cfptr = fopen("inventory.txt","w");
    }
    else
    {
        //if u enter 0 program stops taking record
        printf(" (PRESS 0 TO  Discountinue)\n");
        printf("\nEnter Record Number: ");
        scanf("%d", &hardware.record);
        //taking data from the user
        while (hardware.record != 0)
        {

            printf("Enter Tool Name: ");
            fflush(stdin);
            gets(hardware.toolName);

            printf("Enter Quantity, Cost: ");
            scanf("%d %f", &hardware.quantity, &hardware.cost);
            fseek(cfptr, (hardware.record - 1)*sizeof(struct inventory), SEEK_SET);
            fwrite(ptr, sizeof(struct inventory), 1, cfptr);
            
            printf("? ");
            printf("\nEnter Record Number: ");
            scanf("%d", &hardware.record);
            rewind(cfptr);
        }
        
    }
    fclose(cfptr);
}
//output
void output()
{
    //reading data displayin"
    struct inventory copy = {0, "", 0, 0.0};

    FILE *cfptr;
    cfptr = fopen("inventory.txt", "rb");
    int result;
    if (cfptr == NULL)
    {
        printf("FILE NOT FOUND!!\n");
    }
    else
    { rewind(cfptr);
        system("cls");
        printf("\t***********************\n\t    DISPLAYING DATA\n\t***********************\n");
        printf("RECORD\t\tTOOL_NAME\t\t\tQUANTITY\tCOST\n_____________________________________________________________________\n");

        //check while not EOF
        while (!feof(cfptr))
        {

            result = fread(&copy, sizeof(struct inventory), 1, cfptr);
            //this will not print anyother record until ; 
            if ( result != 0 && copy.record != 0)
            {
                printf("%d \t\t%-16s\t\t%d\t\t%.3f\n", copy.record, copy.toolName, copy.quantity, copy.cost);
               
            }
             
        }
        //to hold the control
        getch();
       
    }
     fclose(cfptr);
}
//for deletion/8/
void delete ()
{
//search for required record
    char del;
    
    struct inventory copy;
    int delete = 0;
    FILE *cfptr;
    ;
if ((cfptr = fopen("inventory.txt", "rb+")) ==NULL)
{
  printf("FILE NOT FOUND");
}
else{
 
    system("cls");
    printf("ENTER PRODUCT YOU WANTS TO DELETE:  ");
    scanf("%d", &delete);

    printf("\nRECORD\tTOOL_NAME\tQUANTITY\tCOST\n______________________________________________________\n");
//pointer will go to required location and take struct and stores it into copy
    fseek(cfptr,  (delete - 1) *sizeof(struct inventory), SEEK_SET);

    fread(&copy, sizeof(struct inventory), 1, cfptr);


    if (copy.record == 0)
    {
        printf("\nRECORD HAS NO INFORMATION\n");
     
        getch();
    }
    else
    {
        printf("%d \t%s\t\t%d\t\t%.3f\n", copy.record, copy.toolName, copy.quantity, copy.cost);
       
        printf("Do You want to Delete? (Y\\N)");
          
        del = getch();
        if (del == 'Y')
        {
            //setting record of that particular struct to zero (so that struct will not be shown on display)
            copy.record = 0;
//pointer will reverse order, beacuse after reading pointer move to the end of that struct.
            fseek(cfptr, -1 * (int)sizeof(struct inventory), SEEK_CUR);
// To overwrite in file
            fwrite(&copy, sizeof(struct inventory), 1, cfptr);

            printf("\n\n*****  SUCCESFULLY DELETED *****\n");
            getch();
        }
    }
}
    fclose(cfptr);
}
//same as delete but in this we are just viewing
void search()
{
    struct inventory copy;
    int search ;
    FILE *cfptr;
    cfptr = fopen("inventory.txt", "rb");
    system("cls");
    printf("ENTER PRODUCT YOU WANTS TO SEARCH:  ");
    scanf("%d", &search);
    printf("\t***********************\n\t    DISPLAYING DATA\n\t***********************\n");
    printf("\nRECORD\tTOOL_NAME\tQUANTITY\tCOST\n______________________________________________________\n");
     fseek(cfptr,  (search - 1)*sizeof(struct inventory), SEEK_SET);

    fread(&copy, sizeof(struct inventory), 1, cfptr);


    if (copy.record == 0)
    {
        printf("\nRECORD HAS NO INFORMATION\n");
        ftell(cfptr);
        getch();
    }
    
    else
    {
        printf("%d \t%s\t\t%d\t\t%.3f\n", copy.record, copy.toolName, copy.quantity, copy.cost);
            getch();
        }
    
    fclose(cfptr);
}
//same as delete but in this we are modifying  by oueselves
void update()
{
     char del;
    
    struct inventory copy;
    int update = 0;
    FILE *cfptr;
    
if ((cfptr = fopen("inventory.txt", "rb+")) ==NULL)
{
  printf("FILE NOT FOUND");
}
else{
    rewind(cfptr);
    system("cls");
    printf("ENTER PRODUCT YOU WANTS TO DELETE:  ");
    scanf("%d", &update);

    printf("\nRECORD\tTOOL_NAME\tQUANTITY\tCOST\n______________________________________________________\n");

    fseek(cfptr,  (update - 1)*sizeof(struct inventory), SEEK_SET);

    fread(&copy, sizeof(struct inventory), 1, cfptr);


    if (copy.record == 0)
    {
        printf("\nRECORD HAS NO INFORMATION\n");
         printf("%d",ftell(cfptr)); 
        getch();
    }
    
    {
        printf("%d \t%s\t\t%d\t\t%.3f\n", copy.record, copy.toolName, copy.quantity, copy.cost);
       
        printf("Do You want to Upadte? (Y\\N)");
             printf("%d",ftell(cfptr));
        del = getch();
        if (del == 'Y')
        {
           
 printf("\nEnter Tool Name: ");
            fflush(stdin);
            gets(copy.toolName);

            printf("Enter Quantity, Cost: ");
            scanf("%d %f", &copy.quantity, &copy.cost);
            fseek(cfptr, (copy.record - 1)*sizeof(struct inventory), SEEK_SET);
            fwrite(&copy, sizeof(struct inventory), 1, cfptr);
            printf("\n\n*****  SUCCESFULLY UPDATE *****\n");
            getch();
        }
    }
}
    fclose(cfptr);
}

