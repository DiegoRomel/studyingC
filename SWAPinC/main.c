#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, aux;
    a = 10.6;
    b = 20.3;

    printf("Before:\na = %.1lf\nb = %.1lf\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("After:\na = %.1lf\nb = %.1lf\n", a, b);

    return 0;
}
