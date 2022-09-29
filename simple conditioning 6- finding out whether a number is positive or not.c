//the program finds out whether a number is positive or not//

#include <stdio.h>

    int main (){

    float num;

    printf ("please insert the number= ");
    scanf ("%f", &num);

    if (num>0){
        printf ("the number is positive");
    }else{
        printf ("the number is not positive");
    }
        return 0;
}
