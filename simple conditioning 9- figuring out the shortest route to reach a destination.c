//this program finds out the shortest route to the destination based on a scenario//

#include <stdio.h>

    int main (){

    float routeA;
    int routeB;

    printf ("please insert the distance of route A= ");
    scanf ("%f", &routeA);

    printf ("please insert the distance of route B= ");
    scanf ("%d", &routeB);

    if (routeA>routeB){
        printf ("route B is the shortest route to the destination");
    }else{
        printf ("route A is the shortest route to the destination)");
    }
        return 0;
}
