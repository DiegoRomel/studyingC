#include <stdio.h>
#include <stdlib.h>

/*write a program that calculates the grade in the following way:
A: 90 - 100
B: 80 - 89
C: 70 - 79
D: 60 - 69
F: 00 - 59
*/


int main()
{    char grade;

    printf("Enter your grade (A - F): \n");
    scanf("%c", &grade);

    switch (grade) {
    case 'A':
        printf("Grade is between 90 - 100\n");
        break;
    case 'B':
        printf("Grade is between 80 - 89\n");
        break;
    case 'C':
        printf("Grade is between 70 -79\n");
        break;
    case 'D':
        printf("Grade is between 60 -69\n");
        break;
    default:
        printf("Error: try again...\n");
        break;
    }



    return 0;
}
