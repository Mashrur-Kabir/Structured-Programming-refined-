//the program finds out whether a number is 0 (zero) or not//

#include <stdio.h>

    int main (){

    float num;

    printf ("please insert the number= ");
    scanf ("%f", &num);

    if (num==0){
        printf ("the number is zero (0)");
    }else{
        printf ("the number is not zero (0)");
    }
        return 0;
}
