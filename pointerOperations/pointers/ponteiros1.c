#include <stdio.h>

int main(void)
{
    int x; /* reservando um lugar na memória para o valor de x */
    x = 10; /* atribuindo um valor a x */

    /* o símbolo & significa endereço de memória, por isso o usamos na func scanf */

    /* printando o valor da variável: */
    printf("%d\n", x);

    /* printando o endereço na memória: */
    printf("%d\n", &x);

    /* declarando um ponteiro */
    int *ponteiro; /* note o uso do asterístico antes do nome da variável */
    ponteiro = &x; /* igualando o ponteiro ao endereço de memória da variável x */

    /* printando o ponteiro na tela: */
    printf("%d\n", ponteiro);
    /* printando o VALOR do espaço de memória que o ponteiro aponta */
    printf("%d\n", *ponteiro);

    return 0;
}