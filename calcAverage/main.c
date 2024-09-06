#include <stdio.h>
#include <stdlib.h>

int main() {
    int grade1, grade2, grade3;
    printf("Enter grade1: ");
    scanf("%d", &grade1);
    printf("Enter grade2: ");
    scanf("%d", &grade2);
    printf("Enter grade3: ");
    scanf("%d", &grade3);

    double average = (grade1 + grade2 + grade3) / 3.0;
    printf(" The average is: %.2lf", average);

    return 0;
}
