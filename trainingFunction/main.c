#include <stdio.h>
#include <stdbool.h>

int calculateSum(int a, int b);
bool equal(int a, int b);


int main(void) {
    int sumResult, a, b;

    printf("Enter two values...\n");
    scanf("%d%d", &a, &b);
    sumResult = calculateSum(a, b);
    printf("result is: %d\n", sumResult);

    if (equal(a, b))
        printf("Equal\n");
        else
            printf("Not equal\n");

    return 0;
}


int calculateSum(int a, int b) {
    int result = a + b;
    return result;
}

bool equal(int a, int b) {
    if (a == b)
        return true;
    else
        return false;

}
