#include <stdio.h>
#include <stdlib.h>
void show_record(int count);

struct car
    {
        char name[50];
        char model[50];
        char colour [50];
        int price;
        float weight;

    }car[100];

int main()
{
    FILE *fptr;
    int  i=0,x,n,count=0;


    do
    {
        printf("**MAIN MENU**\n");
        printf("1.Enter record\n2.Write in file\n3.Edit the record\n4.Delete the record\n5.Retrieve record from file\n6.Exit the program\n");
        scanf("%d",&x);
        switch(x)
        {
           case 1:
             printf("**Entering record of the Car**\n\n");
             do
             {
             printf("Enter the name of the car:\n");
             scanf("%s",car[i].name);
             printf("Enter the model of the car:\n");
             scanf("%s",car[i].model);
             printf("Enter the colour of the car:\n");
             scanf("%s",car[i].colour);
             printf("Enter the price of the car:\n");
             scanf("%d",&car[i].price);
             printf("Enter the weight of the car:\n");
             scanf("%f",&car[i].weight);
             count++;
             i++;
             printf("If you want to add more records press any numeric key & If you want to terminate press -1\n ");
             scanf("%d",&n);

             }while (n!=-1);
             break;

            case 2:
                fptr=fopen("car.txt","w");
                for(i=0;i<count;i++)
                    {
                fprintf(fptr,"%s\t",car[i].name);
                fprintf(fptr,"%s\t",car[i].model);
                fprintf(fptr,"%s\t",car[i].colour);
                fprintf(fptr,"%d\t",car[i].price);
                fprintf(fptr,"%.2f\n",car[i].weight);
                }
                fclose(fptr);
                printf("Record has been entered in the file\n");
                break;
            case 3:

              show_record(count);
              break;

        }

    }while (x!=6);

    return 0;
}
void show_record(int count)
{
    FILE *fptr;
int i=0;
    fptr=fopen("car.txt","r");
    while(i<count&&fptr!=EOF)
   {
                fscanf(fptr,"%s\t",car[i].name);
                printf("%s\t",car[i].name);

                fscanf(fptr,"%s\t",car[i].model);
                printf("%s\t",car[i].model);

                fscanf(fptr,"%s\t",car[i].colour);
                printf("%s\t",car[i].colour);

                fscanf(fptr,"%d\t",&car[i].price);
                printf("%d\t",car[i].price);

                fscanf(fptr,"%.2f\t\n",&car[i].weight);
                printf("%.2f\t\n",car[i].weight);
                i++;

   }
                fclose(fptr);

}