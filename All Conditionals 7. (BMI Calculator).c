//The program measures BMI by height and weight variable input by user//

#include<stdio.h>
int main(){
float height, weight, bmi;

    printf("Please enter your weight(kg) = ");
    scanf("%f",&weight);
    printf("Please enter your height(meter) = ");
    scanf("%f",&height);

bmi=weight/(height*height);

if(bmi<18.5){
    printf("your BMI is %.1f result: Underweight",bmi);
}else if(bmi>=18.5 && bmi<=24.9){
    printf("your BMI is %.1f result: Normal",bmi);
}else if(bmi>=25 && bmi<=29.9){
    printf("your BMI is %.1f result: Overweight",bmi);
}else{
    printf("your BMI is %.1f result: Obese",bmi);
}
    return 0;
}
