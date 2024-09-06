#include <stdio.h>
#include <stdlib.h>

// check if the given number is a triple or double digit number.

int main()
{
    int number;

    scanf("%d", &number);

    if (number > 99 && number < 1000)
        printf("triple digit\n");
    else if (number > 9 && number < 99)
        printf("double digit\n");
    else
        printf("neither\n");


    return 0;
}
