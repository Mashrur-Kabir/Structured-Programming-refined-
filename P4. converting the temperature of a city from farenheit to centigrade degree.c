/*This program will convert a temperature of a city in fahrenheit degree into
centigrade degree*/

#include <stdio.h>

    int main () {

    float ct_fahrenheit;

    printf ("please input temperature of city in fahrenheit degree= ");
    scanf ("%f", &ct_fahrenheit);

    printf ("the temperature of the city in centigrade degree is= %.2f",(ct_fahrenheit-32)*5/9);

    return 0;

}
