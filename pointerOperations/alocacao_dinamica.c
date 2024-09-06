#include <stdio.h>
#include <stdlib.h>

int main(void)
 {
    int *Pvalor;
    printf("endereco de memoria do ponteiro Pvalor: %x\n", Pvalor);
    Pvalor = malloc(sizeof(int));
    printf("endereco de memoria do ponteiro Pvalor apos a alocacao de memoria dinamica: %x\n", Pvalor);

    return 0;
 }