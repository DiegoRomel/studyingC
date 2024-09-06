#include <stdio.h>
#include <stdlib.h>

//a program that return congrats if the grade is >= 60, or "failed. Try again" if not.

int main()
{
    int grade;
    printf("Enter your grade: \n");
    scanf("%d", &grade);

    if (grade >= 60) {
        printf("Congratulations!\n");
    }else {
        printf("Failed. Try again..\n");
    }

    return 0;
}
