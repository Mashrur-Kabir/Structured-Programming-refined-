//the objective is to interchange the contents of two location called C & D//

#include <stdio.h>

int main () {

    int c_location, d_location, blank_location;

    printf ("enter the value of c= ");
    scanf ("%d", &c_location);

    printf ("enter the value of d= ");
    scanf ("%d", &d_location);

    blank_location=c_location;
    c_location=d_location;
    d_location=blank_location;

    printf ("value of c location= %d", c_location);
    printf ("\nvalue of d location= %d", d_location);

    return 0;
}
