/*The program changes an integers value if the int variable currentNumber is odd, hence it is now 3 times the value
plus 1, otherwise changes its value so that it is now half of the value*/

#include<stdio.h>
int main(){
int currentNumber;

    printf("Enter the number = ");
    scanf("%d",&currentNumber);

if((currentNumber%2)!=0){
    printf("The value of the number = %d",(currentNumber*3)+1);
}else{
    printf("The value is %d",currentNumber/2);
}
    return 0;
}
