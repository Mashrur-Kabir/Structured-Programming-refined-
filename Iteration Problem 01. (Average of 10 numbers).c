/*This program takes 10 integers from keyboard using lop and
print their average value on screen*/

#include<stdio.h>

int main (){

    int i, num, sum=0;
    float ave;

    for(i=1;i<=10;i++){
    printf("Enter the integer = ");
    scanf("%d",&num);
    sum=sum+num;
}
ave=(float)sum/10;
printf("The average of the integers is = %.2f",ave);

return 0;
}
