#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num;
    printf("Enter a value...\n");
    scanf("%f", &num);

    printf("the square of %.1f is %.1f\n", num, sqrt(num));

    return 0;
}
