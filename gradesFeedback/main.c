#include <stdio.h>
#include <stdlib.h>


/*write a program that get grades from the user and print "Excellent job!" if is => 80
print "Not bad..." if >=60
and print "Oh...You didn't pass" if < 60.
*/

int main()
{
    int counter = 1;
    do {
    float grade;

    printf("Enter your grade: \n");
    scanf("%f", &grade);

    if (grade >= 80) {
        printf("Excellent job!\n");
    } else if (grade >= 60) {
        printf("Not bad...\n");
    } else {
        printf("Oh...You didn't pass.\n");
    }

    printf("Enter 1 to continue...\n");
    scanf("%d", &counter);
    } while (counter == 1);
    return 0;
}
