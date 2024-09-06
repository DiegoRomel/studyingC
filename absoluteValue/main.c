#include <stdio.h>
#include <stdlib.h>

/* write a program that return the absolute value of the given number.
*/

int main()
{
    int number;
    printf("Enter a value: \n");
    scanf("%d", &number);

    if (number < 0) {
        number *= -1;
    }

    printf("absolute value: |%d|\n", number);


    return 0;
}
