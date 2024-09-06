#include <stdio.h>

int main(void)
{
    float valor;
    printf("entre com um valor para ver se eh positivo ou negativo.\n");
    scanf("%f", &valor);

    if(valor >= 0)
        printf("positivo\n");
    else
        printf("negativo\n");

    return 0;
}