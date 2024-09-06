#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//calculate the distance between 2 points (x1, y1) and (x2, y2)

int main()
{
    float x1, y1, x2, y2;

    printf("Enter x1, y1, x2, y2 coordinates: \n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    float distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    printf("distance is: %.2f\n", distance);

    return 0;
}
