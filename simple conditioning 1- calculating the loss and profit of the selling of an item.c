//The program determines whether a seller has made any profit or suffered a loss in business//

#include <stdio.h>

int main () {

    float cp, sp;

    printf ("enter the cost price of the item= ");
    scanf ("%f", &cp);

    printf ("enter the selling price of the item= ");
    scanf ("%f", &sp);

    if (sp>cp){
        printf ("the seller has made profit of %.2f", sp-cp);
    }else{
        printf ("the seller suffered a loss of %.2f", cp-sp);
    }

    return 0;
}
