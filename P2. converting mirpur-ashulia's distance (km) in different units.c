//Converting mirpur-ashulia distance in different units//

#include <stdio.h>

int main () {

    float d_kilometer;
    float d_meter;
    float d_feet;
    float d_inches;
    float d_centimeter;

    printf ("please input the the distance of mirpur to ashulia (km)= ");
    scanf ("%f", &d_kilometer);

    d_meter=1000*d_kilometer;
    d_feet=3280.8399*d_kilometer;
    d_inches=39370.0787*d_kilometer;
    d_centimeter=100000*d_kilometer;

    printf ("distance in meter= %.2f", d_meter);

    printf ("\ndistance in feet= %.2f", d_feet);

    printf ("\ndistance in inches= %.2f", d_inches);

    printf ("\ndistance in centimeter= %.2f", d_centimeter);

    return 0;
}
