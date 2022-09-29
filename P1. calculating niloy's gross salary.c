// This program will calculate Niloys basic salary //

#include <stdio.h>

int main (){

    float b_salary, d_allowance, h_rent, g_salary;

    printf("enter the basic salary of niloy= ");
    scanf("%f", &b_salary);

    d_allowance=0.4*b_salary;
    h_rent=0.2*h_rent;
    g_salary=b_salary+d_allowance+h_rent;

    printf("niloys gross salary is = %.2f",g_salary);

    return 0;
}

