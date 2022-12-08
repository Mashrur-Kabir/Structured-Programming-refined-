/*This program can calculate the summation, subtraction, multiplication and division
of two numbers input by user*/

#include<stdio.h>
int main(){
int choice;
float num_1, num_2;

printf("Enter the first number= ");
scanf("%f",&num_1);
printf("Enter the second number= ");
scanf("%f",&num_2);
printf("Choose the type of calculation\n\n1. summation\n2. subtraction\n3. multiplication\n4. division \n= ");
lebel1: scanf("%d",&choice);
if(choice==1){
    printf("The summation of %.2f and %.2f is = %.2f",num_1,num_2,num_1+num_2);
}else if(choice==2){
    printf("The subtraction of %.2f and %.2f is = %.2f",num_1,num_2,num_1-num_2);
}else if(choice==3){
    printf("The multiplication of %.2f and %.2f is = %.2f",num_1,num_2,num_1*num_2);
}else if(choice==4){
    printf("The division of %.2f and %.2f is = %.2f",num_1,num_2,num_1/num_2);
}else{
    printf("Invalid choice. \nEnter a valid choice: \n\n");
    goto lebel1;
}
return 0;
}
