#include <stdio.h>
#include <stdlib.h>

/*
write a program that checks if it is a leap year.
    The rule is that if the year is divisible by 100 and
not divisible by 400, leap year is skipped. The year
2000 was a leap year, for example, but the years 1700,
1800, and 1900 were not. The next time a leap year will
be skipped is the year 2100.
*/


int main()
{
    int counter = 1;
    do {
    int year;
    printf("Enter a year...\n");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 == 0) {
            printf("Is leap.\n");
        } else if (year % 100 != 0) {
            printf("Is leap.\n");
        } else {
            printf("It is not.\n");
        }
    } else {
        printf("It is not.\n");
    }




    printf("enter 1 to continue..\n");
    scanf("%d", &counter);
    } while (counter == 1);

    return 0;
}
