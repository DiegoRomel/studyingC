#include <stdio.h>
#include <stdlib.h>

// write a program that receive 3 numbers and return the maximum and the minimum.


int main()
{
    int counter = 1;

    do {

    float num1, num2, num3, max, min;
    printf("Enter 3 values: \n");
    scanf("%f%f%f", &num1, &num2, &num3);

    max = num2;
    min = num1;

    if (num1 > num2) {
        max = num1;
        min = num2;
    }
    if (max < num3) {
        max = num3;
    }
    if (num3 < min) {
        min = num3;
    }

    printf("The maximum is %.2f, and the minimum is %.2f.\n", max, min);


    printf("Enter 1 to continue...\n");
    scanf("%d", &counter);
    }   while (counter == 1);

    return 0;
}
