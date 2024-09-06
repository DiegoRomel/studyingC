#include <stdio.h>
#include <stdlib.h>

// a program that tells if the number is even or odd.

int main()
{
    int number;

    printf("Enter a value: \n");
    scanf("%d", &number);

    if (number % 2 != 0) {
        printf("This is an odd number.\n");
    } else {
    printf("This is an even number.\n");
    }



    return 0;
}
