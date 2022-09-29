//this program will check whether a triangle is valid or not//

#include <stdio.h>

int main (){

    float ang1, ang2, ang3;

    printf ("enter the value of angle 1= ");
    scanf ("%f", &ang1);

    printf ("enter the value of angle 2= ");
    scanf ("%f", &ang2);

    printf ("enter the value of angle 3= ");
    scanf ("%f", &ang3);

    if (ang1+ang2+ang3==180){
        printf ("the triangle is valid");
    }else{
        printf ("the triangle is not valid");
    }



    return 0;
}
