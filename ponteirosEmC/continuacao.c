#include <stdio.h>
#include <stdlib.h>

int continuacao(void){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    int *resultado;
    resultado = 6422228;
    printf("resultado: %d\n", *resultado);










    double soma = *pX + *pY; //a soma entre os valores pode ser efetuada através dos ponteiros.
    printf("soma eh igual a: %.3lf\n", soma);

/*
    lembrando que usamos:
    *pX -> para o valor da variável que o ponteiro está apontando.
    pX -> para o endereço de memória que o ponteiro está apontando.
*/

    return 0;
}
