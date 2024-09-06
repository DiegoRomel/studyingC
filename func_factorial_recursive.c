#include <stdio.h>


int factorial(int value)
{
    if (value == 1)
    {
        return value;
    }
    return value * factorial(value - 1);
}


int main(void)
{
    int x;
    printf("insira um valor para ter seu fatorial: ");
    scanf("%d", &x);
    printf("fatorial de %d eh: %d\n", x, factorial(x));
    return 0;
}
/*
    if number 4
    factorial(4)
    return 4 * factorial(3)

    factorial(3)
    return 3 * factorial(2)

    factorial(2)
    return 2 * factorial(1)

*/