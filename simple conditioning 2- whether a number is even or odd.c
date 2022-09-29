//this is to find out whether or not a number is even or odd//

#include <stdio.h>

int main (){

    int num;

    printf ("please enter a number= ");
    scanf ("%d", &num);

    if(num%2!=0){
        printf ("the number is odd");
    }else{
        printf ("the number is even");
    }

    return 0;
}
