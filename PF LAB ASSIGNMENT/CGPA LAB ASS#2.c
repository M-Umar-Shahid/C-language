#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sam,s,i,sub,j,ns,mos,k;
    char grade,A;
    float gpa,cp,tcp,n,l,ch;
    printf("ENTER YOUR NUMBER OF SAMESTERS:");
    scanf("%d",&sam);
    while(sam<1 || sam>8)
    	{
    		printf("invalid samester:enter samester again:");
    		scanf("%d",&sam);
		}
		for(j=1;j<=sam;j++)
		{
			printf("\nhow many subjects have you studied in %d samester:",j);

			scanf("%d",&ns);
			printf("enter marks of %d subject:\t\nor enter -1 to terminate",ns);
			for(k=1;k<=ns;k++)
			{
				printf("\nenter marks of subject %d:\t",k);
				scanf("%d",&mos);
				if (mos==-1)
                {
                    break;
                }
				if (mos>=85)
				{
					cp=3.67;
					printf("grade is A");
				}
				if (mos>=80 && mos<=84)
				{
					cp=3.34;
					printf("grade is A-");
				}
				if (mos>=75 && mos<=79)
				{
					cp=3.01;
					printf("grade is B+");
				}
				if (mos>=71 && mos<=74)
				{
					cp=2.67;
					printf("grade is B");
				}
				if (mos>=68 && mos<=70)
				{
					cp=2.34;
					printf("grade is B-");
				}
				if (mos>=64 && mos<=67)
				{
					cp=2.01;
					printf("grade is C+");
				}
				if (mos>=61 && mos<=63)
				{
					cp=1.67;
					printf("grade is C");
				}
				if (mos>=58 && mos<=60)
				{
					cp=1.31;
					printf("grade is C-");
				}
				if (mos>=54 && mos<=57)
				{
					cp=1.01;
					printf("grade is D+");
				}
				if (mos>=50 && mos<=53)
				{
					cp=0.10;
					printf("grade is D");
				}
				if (mos<50)
				{
					cp=0.00;
					printf("grade is F");
				}
              printf("\tsubject:%d\tmarks:%d\tGPA:%f\n",ns,mos,cp);
              n=cp*4;
              tcp=tcp+n;

              ch=4*ns;
		gpa=tcp/ch;


		}
		printf("total credit hours are %d",ch);
		printf("your gpa is %f",gpa);
		if (gpa<2)
        {
            printf("\nWARNING YOU ARE IN PROBITION\n");

        }

}


}
