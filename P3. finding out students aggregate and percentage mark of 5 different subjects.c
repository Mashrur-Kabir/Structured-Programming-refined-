/*This program is to find the aggregate and percentage
marks obtained by a student in 5 different subjects*/

#include <stdio.h>

int main () {

    float math, english, physics, chemistry, ict, agg_marks, perc_marks;


    printf ("please input math number= ");
    scanf ("%f, &math");

    printf ("please input english number= ");
    scanf ("%f, &english");

    printf ("please input physics number= ");
    scanf ("%f", &physics);

    printf ("please input chemistry number= ");
    scanf ("%f", &chemistry);

    printf ("please input ict number= ");
    scanf ("%f", &ict);

    agg_marks=math+english+physics+chemistry+ict;
    printf ("\nthe aggregate mark is= %.2f", agg_marks);

    perc_marks=agg_marks/5;
    printf ("\nthe percentage mark is= %.2f", perc_marks);

    return 0;

}
