/*the program calculates the sum of all the numbers
of a five digit number*/

#include <stdio.h>

int main () {
    int number;
    int sum=0;
    int remain;

    printf ("enter the five digit number= ");
    scanf ("%d", &number);

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    remain=number%10;
    sum=sum+remain;
    number=number/10;

    printf("the sum of the digits of the number is= %d", sum);

    return 0;
    }
