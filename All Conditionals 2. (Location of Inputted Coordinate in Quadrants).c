/*The program takes input of the value- X & Y coordinates and outputs
in which quadrant the inputted coordinates resides*/

#include<stdio.h>
int main(){
float x,y;

    printf("put the value of X= ");
    scanf("%f",&x);
    printf("put the value of Y= ");
    scanf("%f",&y);

if(x>0 && y>0){
    printf("Inputted coordinate (%.2f, %.2f) is located in 1st Quadrant",x,y);
}else if(x<0 && y>0){
    printf("Inputted coordinate (%.2f, %.2f) is located in 2nd Quadrant",x,y);
}else if(x<0 && y<0){
    printf("Inputted coordinate (%.2f, %.2f) is located in 3rd Quadrant",x,y);
}else if(x>0 && y<0){
    printf("Inputted coordinate (%.2f, %.2f) is located in 4th Quadrant",x,y);
}else if(x==0 && y==0){
    printf("Inputted coordinate (%.2f, %.2f) is located in the center",x,y);
}else{
    printf("The coordinate (%.2f, %.2f) is located in the X or Y axis",x,y);
}
    return 0;
}
