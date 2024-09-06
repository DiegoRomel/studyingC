#include <stdio.h>
#include <stdlib.h>

//a program that receives a 3 digits integer number and calculate the sum of it's digits

int main()
{
    int counter = 1;

    do {
    int number, firstDigit, secondDigit, thirdDigit;
    printf("Enter a 3 digit number: \n");
    scanf("%d", &number);
    firstDigit = number / 100; // 359 / 100 = 3.59, int = 3
    printf("first digit: %d\n", firstDigit);
    secondDigit = (number % 100) / 10;
    printf("second digit: %d\n", secondDigit);
    thirdDigit = number % 10;
    printf("third digit: %d\n", thirdDigit);
    int sum = firstDigit + secondDigit + thirdDigit;
    printf("The sum of these digits is: %d\n", sum);
    printf("press 1 to continue: \n");
    scanf("%d", &counter);

    } while (counter == 1);

    return 0;
}
