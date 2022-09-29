/*the program is to find out the sum of the
first and last number of a five digit number*/

#include<stdio.h>

int main (){

    int num;

    printf ("enter a five digit number= ");
    scanf ("%d", &num);

    printf ("the reverse of the number is= %d", num%10+num/10000);

    return 0;
}
