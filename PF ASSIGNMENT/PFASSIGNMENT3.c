#include<stdio.h>
void insert();
void display();
void deletefile();
void update();
int avlrecordno(int recNum);
struct hadware{
 int recordno;
 char TOOLNAME[30];
 int Quantity;
 float Cost;
}stud;
int main() {
 
 int c, emp;
 while (c != 7){
 printf( "\nEnter your choice\n"
"1 - Add a new tool\n"
"2 - List of all tool\n"
"3 - Delete a tool\n"
"4 - Update an existing tool\n"
"5 - End program\n? " );
 scanf("%d", &c);
 printf("\n");
 switch (c)
 {
 case 1:
 insert();
 break;
 case 2:
 display();
 break;
 case 3:
 deletefile();
 break;
 case 4:
 update();
 break;
 case 5:
 return 0;
 break;
 default:
 printf("\nYour choice is wrong\nPlease try again...\n");
 break;
 }
 }
 
}
// FUNCTION TO INSERT RECORDS TO THE FILE
void insert()
{
 FILE *fp;
 fp = fopen("hardware.dat", "a");
 printf("Enter the record no :");
 scanf("%d", &stud.recordno);
 printf("Enter the TOOLNAME :");
 scanf("%s", &stud.TOOLNAME);
 printf("Enter the Quantity :");
 scanf("%d", &stud.Quantity);
 printf("Enter the Cost :");
 scanf("%f", &stud.Cost);
 fwrite(&stud, sizeof(stud), 1, fp);
 fclose(fp);
}
// FUNCTION TO DISPLAY RECORDS
void display()
{
 FILE *fp1;
 fp1 = fopen("hardware.dat", "r");
 printf("\nRecord #\tTOOLNAME\t\tQuantity\t\tCost\n\n");
 while (fread(&stud, sizeof(stud), 1, fp1))
 printf(" %d\t\t%10s\t\t%8d\t%14.2f\n", stud.recordno,stud.TOOLNAME,stud.Quantity,stud.Cost);
 fclose(fp1);
}
// FUNCTION TO DELETE A RECORD
void deletefile()
{
 FILE *fpo;
 FILE *fpt;
 int r, s;
 printf("Enter the record no you want to delete :");
 scanf("%d", &r);
 if (avlrecordno(r) == 0)
 printf("record no %d is not available in the file\n", r);
 else
 {
 fpo = fopen("hardware.dat", "r");
 fpt = fopen("TempFile", "w");
 while (fread(&stud, sizeof(stud), 1, fpo))
 {
 s = stud.recordno;
 if (s != r)
 fwrite(&stud, sizeof(stud), 1, fpt);
 }
 fclose(fpo);
 fclose(fpt);
 fpo = fopen("hardware.dat", "w");
 fpt = fopen("TempFile", "r");
 while (fread(&stud, sizeof(stud), 1, fpt))
 fwrite(&stud, sizeof(stud), 1, fpo);
 printf("\nRECORD DELETED\n");
 fclose(fpo);
 fclose(fpt);
 }
}
// FUNCTION TO UPDATE THE RECORD
void update()
{
 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 printf("Enter record number to update:");
 scanf("%d", &r);
 avl = avlrecordno(r);
 if (avl == 0)
 {
 printf("record number %d is not Available in the file", r);
 }
 else
 {
 fpo = fopen("hardware.dat", "r");
 fpt = fopen("TempFile", "w");
 while (fread(&stud, sizeof(stud), 1, fpo))
 {
 s = stud.recordno;
 if (s != r)
 fwrite(&stud, sizeof(stud), 1, fpt);
 else
 {
 printf("\n\t1. Update TOOLNAME of record Number %d", r);
 printf("\n\t2. Update Cost of record Number %d", r);
 printf("\n\t3. Update Quantity of record Number %d", r);
 printf("\n\t4. Update both TOOLNAME and Cost of record Number %d", r);
 printf("\nEnter your choice:");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1:
 printf("Enter TOOLNAME:");
 scanf("%s", &stud.TOOLNAME);
 break;
 case 2:
 printf("Enter Cost : ");
 scanf("%f", &stud.Cost);
 break;
 case 3:
 printf("Enter Quantity : ");
 scanf("%d", &stud.Quantity);
 break;
 case 4:
 printf("Enter TOOLNAME: ");
 scanf("%s", &stud.TOOLNAME);
 printf("Enter Cost: ");
 scanf("%f", &stud.Cost);
 break;
 default:
 printf("Invalid Selection");
 break;
 }
 fwrite(&stud, sizeof(stud), 1, fpt);
 }
 }
 fclose(fpo);
 fclose(fpt);
 fpo = fopen("hardware.dat", "w");
 fpt = fopen("TempFile", "r");
 while (fread(&stud, sizeof(stud), 1, fpt))
 {
 fwrite(&stud, sizeof(stud), 1, fpo);
 }
 fclose(fpo);

 fclose(fpt);
 printf("RECORD UPDATED");
 }
}
// FUNCTION TO CHECK GIVEN record NO IS AVAILABLE //
int avlrecordno(int recNum)
{
 FILE *fp;
 int c = 0;
 fp = fopen("hardware.dat", "r");
 while (!feof(fp))
 {
 fread(&stud, sizeof(stud), 1, fp);
 if (recNum == stud.recordno)
 {
 fclose(fp);
 return 1;
 }
 }
 fclose(fp);
 return 0;
}