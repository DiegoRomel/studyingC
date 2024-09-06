#include <stdio.h>
#include <stdlib.h>

/*
write a program that receives 3 integers and print "divisible" if
each pair between the three numbers is at least one number that can be
divided by the other - without a remainder.
*/

int main()
{
    int counter =1;
    do {
    int num1, num2, num3;
    printf("Enter 3 values...\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 % num2 == 0 || num1 % num3 == 0 || num2 % num1 == 0 || num2 % num3 == 0 || num3 % num1 == 0 || num3 % num2 ==0) {
        printf("Divisible\n");
    } else {
        printf("Non-divisible\n");
    }

    printf("Enter 1 to continue...\n");
    scanf("%d", counter);

    } while (counter == 1);

    return 0;
}
