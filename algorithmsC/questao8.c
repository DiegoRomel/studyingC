#include <stdio.h>

int main(void)
{
    float custo_fabrica, custo_final;
    printf("entre com o custo de fabrica: \n");
    scanf("%f", &custo_fabrica);
    custo_final = custo_fabrica + (custo_fabrica * 28 / 100) + (custo_fabrica * 45 / 100);

    printf("o custo final sera: %f\n", custo_final);

    return 0;
}