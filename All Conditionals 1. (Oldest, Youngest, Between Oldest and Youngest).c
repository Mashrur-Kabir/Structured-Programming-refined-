/*This program takes the input of the age of father, mother, and uncle and finds
who is the oldest, youngest and between oldest and youngest*/

 #include<stdio.h>
int main(){
int f_age, m_age, u_age;

    printf("Enter father's age = ");
    scanf("%d",&f_age);
    printf("Enter mother's age = ");
    scanf("%d",&m_age);
    printf("Enter uncle's age = ");
    scanf("%d",&u_age);

if(f_age>m_age && m_age>u_age){
    printf("father is the oldest\n uncle is the youngest\n mother is between the oldest and youngest");
}else if(f_age>u_age && u_age>m_age){
    printf("father is the oldest\n mother is the youngest\n uncle is between the oldest and youngest");
}else if(m_age>f_age && f_age>u_age){
    printf("mother is the oldest\n uncle is the youngest\n father is between the oldest and youngest");
}else if(m_age>u_age && u_age>f_age){
    printf("mother is the oldest\n father is the youngest\n uncle is between the oldest and youngest");
}else if(u_age>f_age && f_age>m_age){
    printf("uncle is the oldest\n mother is the youngest\n father is between the oldest and youngest");
}else if(u_age>m_age && m_age>f_age){
    printf("uncle is the oldest\n father is the youngest\n mother is between the oldest and youngest");
}else{
    printf("Invalid Input");
}
    return 0;
}
