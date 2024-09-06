#include <stdio.h>

int main() {
// the next element is the previous plus the difference


    int d, n, a1, an, sn;

    printf("Enter the initial element\n");
    scanf("%d", &a1);
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the difference in the arithmetic sequence\n");
    scanf("%d", &d);

    an = a1 + (n-1) * d;
    sn = (a1 + an) * n / 2;


    printf("The n-th element of the arithmetic sequence is: %d\n", an);
    printf("The sum of the amount of %d elements is: %d\n", n, sn);

    return 0;
}
