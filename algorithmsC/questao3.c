#include <stdio.h>

int main(void)
{
    int valor;
    printf("insira um valor: \n");
    scanf("%d", &valor);

    printf("seu antecessor eh: %d\n", valor - 1);

    return 0;
}