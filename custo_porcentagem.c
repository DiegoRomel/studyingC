#include <stdio.h>
int main(void)
{
    float custo, vfinal;
    printf("valor do carro: \n");
    scanf("%f", &custo);
    vfinal = custo + (custo * 0.28) + (custo * 0.45);
    printf("valor final: %.2f\n", vfinal);
    return 0;
}