#include <stdio.h>

int main(void)
{
    int A = 10, B = 20, aux;

    aux = A;
    A = B;
    B = aux;

    printf("A = %d\nB = %d\n", A, B);

    return 0;
}