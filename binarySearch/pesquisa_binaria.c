#include <stdio.h>
// func fatorial

int fatorial(int valor);
int main(void)
{
    int x = 5;
    printf("fatorial do valor %d eh: %d\n", x, fatorial(x));

    return 0;
}


int fatorial(int valor)
{
    if (valor == 1)
        return valor;
    
    return valor * fatorial(valor - 1);
}