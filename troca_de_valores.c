#include <stdio.h>


int main(void)
{
    int a = 10, b = 20, aux;
    aux = a;
    a = b;
    b = aux;


    printf("o valor de a: %d\n", a);
    printf("o valor de b: %d\n", b);

    return 0;

}