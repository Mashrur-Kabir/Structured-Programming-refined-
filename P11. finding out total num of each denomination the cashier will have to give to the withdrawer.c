/*athe program will find the total number of currency notes each denomination
the cashier will have to give to the withdrawer; given that the
currency notes of denominations are 10,50 and 100*/

#include<stdio.h>

int main (){

    int amount;
    int x,y,z;

    printf("please enter the amount withdrawn= ");
    scanf ("%d", &amount);

    x=amount/100;
    y=amount/50;
    z=amount/10;

    printf ("\nnote of 100= %d",x);
    printf ("\n note of 50= %d",y);
    printf ("\n note of 10= %d",z);

    return 0;
}
