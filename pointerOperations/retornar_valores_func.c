#include <stdio.h>
#include <stdlib.h>

void soma_e_subtracao(int a, int b, int *Psoma, int *Psubtracao);
int main(void)
{
    int a = 10;
    int b = 5;
    int *Psoma = malloc(sizeof(int));
    int *Psubtracao = malloc(sizeof(int));

    soma_e_subtracao(a, b, Psoma, Psubtracao);
    printf("soma: %d\nsubtracao: %d\n", *Psoma, *Psubtracao);

    return 0;
}

void soma_e_subtracao(int a, int b, int *Psoma, int *Psubtracao)
{
    *Psoma = a + b;
    *Psubtracao = a - b;
}