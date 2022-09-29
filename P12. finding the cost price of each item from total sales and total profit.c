/*the program finds the cost price of a each item from the
total selling price of 15 items and overall profit earned on them*/

#include<stdio.h>

int main (){

    float t_price;
    float t_profit;
    float price_one;

    printf ("enter the total selling price of all 15 items= ");
    scanf ("%f", &t_price);

    printf ("enter the total profit on the 15 items= ");
    scanf ("%f", &t_profit);

    price_one= (t_price-t_profit)/15;

    printf ("the cost price of each item is= %.2f", price_one);

    return 0;
}
