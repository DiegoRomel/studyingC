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










    double soma = *pX + *pY; //a soma entre os valores pode ser efetuada atrav�s dos ponteiros.
    printf("soma eh igual a: %.3lf\n", soma);

/*
    lembrando que usamos:
    *pX -> para o valor da vari�vel que o ponteiro est� apontando.
    pX -> para o endere�o de mem�ria que o ponteiro est� apontando.
*/

    return 0;
}
