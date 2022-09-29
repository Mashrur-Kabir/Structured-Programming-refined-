//the program decides whether the number is negative is not//

#include <stdio.h>

int main (){

    float num;

    printf ("please input a number= ");
    scanf ("%f", &num);

    if (num>0){
        printf ("the number is positive");
    }else if (num<0){
        printf ("the number is negative");
    }else{
        printf ("the number is neutral");
    }

    return 0;
}
