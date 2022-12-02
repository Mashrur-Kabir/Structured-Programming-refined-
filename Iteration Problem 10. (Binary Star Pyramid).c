//This program displays a half pyramid made of Zeros and Ones//

#include<stdio.h>

int main(){
int row,i,j;

printf("Input the number of rows = ");
scanf("%d",&row);

for(i=1;i<=row;i++){
    for(j=0;j<i;j++){
        printf("%d",j%2);
    }
    printf("\n");
}
return 0;
}
