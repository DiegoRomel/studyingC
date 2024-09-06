#include <stdio.h>
#include <stdlib.h>

//a program that receives a 3 digit number and return it reversed:
//ex: 123 -> 321

int main()
{/*
    int num, firstN, secondN, thirdN;

    printf("Enter a 3 digit number: \n");
    scanf("%d", &num);

    firstN = num / 100;
    secondN = (num % 100) / 10;
    thirdN = num % 10;

    printf("The reversed number is: %d%d%d\n", thirdN, secondN, firstN);

    return 0;
    */
    alternative();
}

//or...
//a program that receives a 3 digit number and return it reversed in a single variable:

int alternative(void) {
    int counter = 1;

    do {
    int num, aux, hundreds, tens, units, reversed;
//    printf("Enter a 3 digit value: \n");
//    scanf("%d", &num);
    num = 123;

    hundreds = num % 10 * 100; // = 300
    tens = (num % 100) / 10 * 10;// = 20
    units = num / 100;// = 1

    reversed = hundreds + tens + units;
    printf("Reversed: %d\n", reversed);

    printf("Enter 1 to continue...\n");
    scanf("%d", &counter);
    } while (counter == 1);






    return 0;
}
