#include <stdio.h>
#include <stdlib.h>


/*
Write a program that reads an input number from the user.
The program should print "1" if the value is positive,
"-1" if it's negative, and "0" if it equals to zero.

*/

int main()
{
    int num;
    printf("Enter a value: \n");
    scanf("%d", &num);

    if (num > 0)
        printf("1\n");
    else if (num < 0)
        printf("-1\n");
    else if (num == 0)
        printf("0\n");
    else
        printf("Error...\n");


    return 0;
}
