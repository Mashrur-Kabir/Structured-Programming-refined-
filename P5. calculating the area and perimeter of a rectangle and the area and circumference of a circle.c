/*calculating the area and perimeter of a rectangle and
the area and circumference of a circle*/

#include <stdio.h>

int main () {

    float r_length;
    float r_breadth;
    float c_radius;
    float r_area;
    float r_perimeter;
    float c_area;
    float c_circumference;

    printf ("input the length of the rectangle= ");
    scanf ("%f", &r_length);

    printf ("input the breadth of the rectangle= ");
    scanf ("%f", &r_breadth);

    printf ("input the radius of the circle= ");
    scanf ("%f", &c_radius);

    r_area=r_length*r_breadth;
    r_perimeter=2*(r_length+r_breadth);
    c_area=3.1416*(c_radius*c_radius);
    c_circumference= 2*3.1416*c_radius;

    printf ("\narea of the rectangle is= %.2f", r_area);

    printf ("\nperimeter of the rectangle is= %.2f", r_perimeter);

    printf ("\narea of the circle is= %.2f", c_area);

    printf ("\ncircumference of the circle is= %.2f", c_circumference);


    return 0;
}
