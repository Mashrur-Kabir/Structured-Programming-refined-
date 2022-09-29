//the program is to input week number and display week day//

#include <stdio.h>

int main (){

    int week_num;

    printf ("enter the week number= ");
    scanf ("%d", &week_num);

    if (week_num>=1 && week_num<=52){
        printf ("Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday");
    }else{
        printf ("invalid");
    }
    return 0;
}
