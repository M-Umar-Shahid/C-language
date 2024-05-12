#include<stdio.h>
int main()
{
    float c,f;
    printf("Celcius to Farenheit\n-----------------------\nFarenheit\tCelcius\n");
    for (float i = 0; i <= 150.0; i=i+10)
    {
        c=0.556*(i-32);
        printf("%.1f\t\t%.1f\n",i,c);
    }
    printf("Farenheit to Celcius\n-----------------------\nCelcius\t\tFarenheit\n");
    for ( float i = 0; i <= 150.0; i=i+10)
    {
        f=(1.8*i)+32;
        printf("%.1f\t\t%.1f\n",i,f);
    }
    
    
}