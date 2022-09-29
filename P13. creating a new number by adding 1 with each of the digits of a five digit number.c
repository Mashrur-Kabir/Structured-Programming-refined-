/*the program adds one to each digits of a five digit
number and prints a new number*/

#include <stdio.h>

int main (){

    int num;
    int a, b, c, d, e;

    printf ("enter a five digit number= ");
    scanf ("%d", &num);

    e=num%10;
    e=++e;
    d=(num/10)%10;
    d=++d;
    c=(num/100)%10;
    c=++c;
    b=(num/1000)%10;
    b=++b;
    a=(num/10000);
    a=++a;

    printf("the new number is= %d%d%d%d%d", a,b,c,d,e);

    return 0;
}
