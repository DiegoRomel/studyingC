#include <stdio.h>

int main(void)
{
    float valor;
    printf("insira um valor: \n");
    scanf("%f", &valor);

    if(valor > 10)
        printf("eh maior que 10\n");
    else
        printf("eh menor que 10\n");
}