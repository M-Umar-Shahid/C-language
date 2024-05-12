#include<stdio.h>

/*pay slip*/
int main()
{
    char grade;
    int years,age,rp,hra,ssb,araw,gp,td,tax,income_tax,arao,gpf,D,np;
    long int ai;
    /*hra=house rent allowance.ssb=social security benefit .araw=adhoc relief allowance for W*/
    /*taking input from user*/
    printf("enter your grade:");//for grade from user
    scanf("%c",&grade);
    printf("enter your experience:");//for experience
    scanf("%d",&years);
    printf("enter your age:");//for age of user
    scanf("%d",&age);
    printf("\n");//escape sequence
    printf("\n");
    /*calculating basic pay*/
    printf("BASIC PAY\n");
    printf("____________\n");

    if(years>3 && age>=30)//condition for adhoc relief allowance for grade W
        araw=3000;
    else
        araw=0;
    if(grade=='W')//data for grade W
    {
        printf("basic salary:                 10000\n");
        printf("no_of_increments are:         %d\n",years);
        rp=10000+years*700;//calculating running pay
        printf("running pay:                  %d\n\n\n",rp);
        printf("ALLOWANCES\n");
        printf("____________\n\n");
        hra=0.45*rp;//calculating house rent allowance
        printf("house rent allowance:         %d\n",hra);
        ssb=0.30*10000;//calculating social security benefit
        printf("social security benefit:      %d\n",ssb);
        printf("adhoc relief allowance:       %d\n\n",araw);
        gp=rp+hra+ssb+araw;//gross pay
        printf("gross pay:                     %d\n",gp);
        printf("DEDUCTIONS\n");
        printf("____________\n");}
        if(age>40)//condition for adhoc relief allowance for grade other than W
            arao=1500;
        else
            arao=0;
        if (grade=='X')//data for grade X
        {
            printf("basic salary:                 12900\n");
        printf("no_of_increments are:         %d\n",years);
        rp=12900+years*910;//calculating running pay
        printf("running pay:                  %d\n\n\n",rp);
        printf("ALLOWANCES\n");
        printf("____________\n\n");
        hra=0.45*rp;//calculating house rent allowance
        printf("house rent allowance:         %d\n",hra);
        ssb=0.30*12900;
        printf("social security benefit:      %d\n",ssb);
        printf("adhoc relief allowance:       %d\n\n",arao);
        gp=rp+hra+ssb+arao;
        printf("gross pay:%d\n",gp);
        printf("DEDUCTIONS\n");
        printf("____________\n");
        }
        if (grade=='Y')//data for grade Y
        {
            printf("basic salary:             21700\n");
        printf("no_of_increments are:%d\n",years);
        rp=21700+years*1500;
        printf("running pay:                  %d\n\n\n",rp);
        printf("ALLOWANCES\n");
        printf("____________\n\n");
        hra=0.45*rp;
        printf("house rent allowance:          %d\n",hra);
        ssb=0.30*21700;
        printf("social security benefit:       %d\n",ssb);
        printf("adhoc relief allowance:        %d\n\n",arao);
        gp=rp+hra+ssb+arao;
        printf("gross pay:                     %d\n",gp);
        printf("DEDUCTIONS\n");
        printf("____________\n");
        }
         if (grade=='Z')//data for grade Z
        {
            printf("basic salary:            32600\n");
        printf("no_of_increments are:       %d\n",years);
        rp=32600+years*2800;
        printf("running pay:                %d\n\n\n",rp);
        printf("ALLOWANCES\n");
        printf("____________\n\n");
        hra=0.45*rp;
        printf("house rent allowance:       %d\n",hra);
        ssb=0.30*32600;
        printf("social security benefit:    %d\n",ssb);
        printf("adhoc relief allowance:     %d\n\n",arao);
        gp=rp+hra+ssb+arao;
        printf("gross pay:                  %d\n",gp);
        printf("DEDUCTIONS\n");
        printf("____________\n");
        }
        ai=gp*12;//calculating annual income



        /*tax deduction according to annual income*/
        if (ai>=0 && ai<=400000)
        {
            income_tax=0*gp;
            printf("income tax <at 0%%>:             %d",income_tax);}
        if (ai>=400001 && ai<=650000)
          {income_tax=0.025*gp;
            printf("income tax <at2.5%%>:            %d",income_tax);}
                if (ai>=650001 && ai<=1000000)
            {income_tax=0.0475*gp;
            printf("income tax <at4.75%%>:           %d",income_tax);}
                    if(ai>=1000001 && ai<=1500000)
            {income_tax=0.07*gp;
            printf("income tax <at7%%>:              %d",income_tax);}
                    if(ai>=1500001)
            {income_tax=0.115*gp;
            printf("income tax <at11.5%%>:           %d",income_tax);}
            /*calculating general provident fund*/
            gpf=0.1*gp;
            printf("\ngeneral provident fund:        %d\n",gpf);
            D=income_tax+gpf;
            printf("total deductions:                %d\n\n\n",D);
            /*calculating net pay*/
            np=gp-D;
            printf("net pay:                         %d",np);
}
