#include <stdio.h>
#include <stdlib.h>

/*
1 - Write a program that reads from the user 2 values of an "integer" type.
The program should print "EQUAL" if both the values are equal. Otherwise, the program should print
"NOT EQUAL".

*/

int main()
{
    int num1, num2, num3;

    printf("Enter three values: \n");
    scanf("%d%d%d", &num1, &num2, &num3);


    if (num1 == num2 && num2 == num3) {
        printf("EQUAL\n");
    } else {
    printf("NOT EQUAL\n");
    }



    return 0;
}
