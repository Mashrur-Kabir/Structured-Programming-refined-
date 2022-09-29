//the program takes basic salary of an employee as input and calculates its gross salary//

#include <stdio.h>

int main (){

    float b_salary;

    printf ("please input the basic salary= ");
    scanf ("%f", &b_salary);

    if (b_salary<=10000){
        printf ("the gross salary %.2f", 0.2*b_salary+0.8*b_salary+b_salary);
    }else if (b_salary<=20000){
        printf ("the gross salary %.2f", 0.25*b_salary+0.9*b_salary+b_salary);
    }else{
        printf ("the gross salary %.2f", 0.3*b_salary+0.95*b_salary+b_salary);
    }

    return 0;
}
