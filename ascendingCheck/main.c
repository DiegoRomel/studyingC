#include <stdio.h>
#include <stdlib.h>

/*
Write a program that reads from the user a "three-digit" integer value.
The program should print "ASCENDING" if the three digits of the number are in
ascending order (from left to right). If not, the program should print "NOT ASCENDING".



For example:

* Input: 137 --> ASCENDING (1<3<7)

* Input: 143 --> NOT ASCENDING.

*/

int main()
{
    int inputNum, first, second, third;
    printf("Enter a value: \n");
    scanf("%d", &inputNum);

    first = inputNum / 100;
    second = (inputNum % 100) / 10;
    third = inputNum % 10;

    if (first < second && second < third) {
        printf("ASCENDING ( %d < %d < %d)\n",first, second, third);
    } else {
        printf("NOT ASCENDING.\n");
    }




    return 0;
}
