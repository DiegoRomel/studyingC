#include <stdio.h>
#include <stdlib.h>

//a program to calculate the time it takes to a vehicle get to somewhere.
//try to convert the time in hours and minutes.

int cont;

int main()
{

    do {
    float distance, speed, time;
    printf("Enter the distance in km: \n");
    scanf("%f", &distance);
    printf("Enter the speed in km/h: \n");
    scanf("%f", &speed);

    time = distance / speed; // time in hours not converted.

    float hour = time % ;

    printf("The total time is: %.2f hours.\n", time);
    printf("Press 1 to continue or any other key to exit.\n");
    scanf("%d", &cont);
    } while (cont == 1);
    return 0;
}




