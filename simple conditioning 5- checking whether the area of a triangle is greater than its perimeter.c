/*the program will check if the area of a triangle is
greater than its perimeter
*/

#include <stdio.h>

int main (){

    float s1, s2, s3, h, area, perimeter;

    printf ("enter the value of s1= ");
    scanf ("%f", &s1);

    printf ("enter the value of s2= ");
    scanf ("%f", &s2);

    printf ("enter the value of s3= ");
    scanf ("%f", &s3);

    printf ("enter the value of height= ");
    scanf ("%f", &h);

    area=1/2*s1*h;
    //assuming that s1 is the ground of the triangle//
    perimeter=s1+s2+s3;

    if (area>perimeter){
        printf ("area of the triangle is greater than its perimeter");
    }else{
        printf ("area of the triangle is not greater than its perimeter");
    }

    return 0;
}
