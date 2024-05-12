#include<stdio.h>
int main()
{
    float price_item1,price_item2,quantity_item1,quantity_item2,average_value;
    printf("Weight Item-1 : ");
    scanf("%f",&price_item1);
    printf("Quantity Item-1 : ");
    scanf("%f",&quantity_item1);
    printf("Weight Item-2 : ");
    scanf("%f",&price_item2);
    printf("Quantity Item-2 : ");
    scanf("%f",&quantity_item2);
    average_value=((price_item1*quantity_item1) +(price_item2*quantity_item2)) /(quantity_item1+quantity_item2);
    printf("The average value is : %f",average_value);
}