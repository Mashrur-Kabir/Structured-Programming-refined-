/*the program prints a pyramid made with stars*/

#include<stdio.h>

    int main (){

    int row,a,b,c;

    printf("Enter the number of rows= ");
    scanf("%d",&row);

    for(a=1;a<=row;a++){
    for(b=1;b<=(row-a);b++){
        printf(" ");
    }
    for(c=1;c<=((2*a)-1);c++){
        printf("*");
    }
    printf("\n");
}

    return 0;
}
