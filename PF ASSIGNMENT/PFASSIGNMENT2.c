#include<stdio.h>
#include<conio.h>
typedef struct
{
int rollnum;
char name[30];
int marks[3];
}student;
int main()
{ int i,b,j,t=0,avarage=0;
student st[4];
for (i=0;i<4;i++)
{
printf("\nStudent roll no: %d",i+1);
st[i].rollnum=i+1;
fflush(stdin);
printf("\nEnter Name::");
gets(st[i].name);
for(j=0;j<3;j++)
{
printf("\nEnter Marks %d::",j+1);
scanf("%d",&st[i].marks[j]);
}
}
for (i=0;i<4;i++)
{
printf("\nStudent rollno : %d",st[i].rollnum);
printf("\nName::");
puts(st[i].name);
t=0;
for(j=0;j<3;j++)
{
printf("\nMarks : %d",st[i].marks[j]);
t+=st[i].marks[j];
}
avarage = t/3;
printf("\nTotal : %d",t);
printf("\nAvarage for student =%d",avarage);
avarage =0;
}
return 0;
}