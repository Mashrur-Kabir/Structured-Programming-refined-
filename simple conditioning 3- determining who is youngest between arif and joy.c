//the program determines who is younger between arif and joy//

#include <stdio.h>

    int main (){

    int arif_age, joy_age;

    printf ("enter arif age= ");
    scanf ("%d", &arif_age);

    printf ("enter joy age= ");
    scanf ("%d", &joy_age);

    if (arif_age>joy_age){
        printf ("joy is the younger one");
    }else{
        printf ("arif is the younger one");
    }

    return 0;
    }
