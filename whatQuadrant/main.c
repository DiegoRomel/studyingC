#include <stdio.h>
#include <stdlib.h>

/*
write a program that receives x and y coordinates and return what quadrant the point is
*/


int main()
{
    int x, y;
    printf("enter x and y coordinates: \n");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0) {
        printf("1 quadrant\n");
    } else if (x < 0 && y > 0) {
        printf("2 quadrant\n");
    } else if (x < 0 && y < 0) {
        printf("3 quadrant\n");
    } else if (x > 0 && y < 0) {
        printf("4 quadrant\n");
    }



    return 0;
}
