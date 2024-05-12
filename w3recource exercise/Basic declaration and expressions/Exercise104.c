

#include <stdio.h>
int main()
{
    float price,increase,i_price;
    printf("Enter item price : ");
    scanf("%f", &price);
    if (price >= 100 && price <= 400)
    {
        increase=0.14;
        i_price=price*increase;
        // 14%
    }
    if (price > 400 && price <= 800)
    {
        increase=0.11;
        i_price=price*increase;
        /* 400.01 - 800.00	11% */
    }
    if (price > 800 && price <= 1200)
    {
        increase=0.09;
        i_price=price*increase;
        /* 800.01 - 1200.00	9% */
    }
    if (price > 1200 && price <= 2000)
    {
        increase=0.06;
        i_price=price*increase;
        /* 1200.01 - 2000.00	6% */
    }
    if (price > 2000)
    {
        increase=0.03;
        i_price=price*increase;
        /* Above 2000.00	3% */
    }
    printf("Increased price : %.1f\n",i_price);
    printf("New price : %.1f\n",price+i_price);
    printf("Increase rate %.1f%%\n",increase*100);
}