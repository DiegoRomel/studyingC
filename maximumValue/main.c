#include <stdio.h>
#include <stdlib.h>

//write a program that return the highest value of 2 inputs.



int main()
{
    int num1, num2, highest;


    printf("Enter 2 numbers: \n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        highest = num1;
    } else if (num1 == num2) {
        printf("They are equal.\n");
    } else {
        highest = num2;
    }

    if (num1 != num2) {
    printf("The highest is: %d.\n", highest);
    }


    return 0;
}
