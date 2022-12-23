//The program displays pyramid made out of number sequence

int main(){
int row,i,j;

printf("Enter the number of rows you want: ");
scanf("%d",&row);

for(i=1;i<=row;i++){
    for(j=0;j<i;j++){
        printf("%d",i+j);
    }
    printf("\n");
}
return 0;
}
