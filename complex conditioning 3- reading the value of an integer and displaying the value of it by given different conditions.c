/*this program reads the value of of an integer m, and display
the value of m is 1 when m is larger than 0, 0 when m is 0, and -1
when m is less than 0*/

#include <stdio.h>

int main (){

    int m;

    printf ("please input an integer number= ");
    scanf ("%f", &m);

    if (m>0){
        printf ("the value of %d is 1", m);
    }else if (m<0){
        printf ("the value of %d is -1", m);
    }else{
        printf ("the value of %d is 0", m);
    }

    return 0;
}
