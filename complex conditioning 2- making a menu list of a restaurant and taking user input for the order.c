//a program to display the menu list and input user choice//

#include <stdio.h>

int main (){

    int num;

    printf ("1.Fried Chicken");
    printf ("\n2.Beef Biryani");
    printf ("\n3.Masala Dosa");
    printf ("\n4.Kimchi Ramen");
    printf ("\n5.Takoyaki");

    printf ("\n\nchoose your order= ");
    scanf ("%d",&num);

    if (num==1){
        printf ("\nyour fried chicken will arrive soon");
    }else if (num==2){
        printf ("\nyour beef biryani will arrive soon");
    }else if (num==3){
        printf ("\nyour masala dosa will arrive soon");
    }else if (num==4){
        printf ("\nyour kimchi ramen will arrive soon");
    }else if (num==5) {
        printf ("\nyour takoyaki will arrive soon");
    }else{
        printf ("\ndear sir/ma'am,\nthe number for your order is invalid");
    }

    return 0;
}
