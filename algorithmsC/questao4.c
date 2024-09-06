#include <stdio.h>

int main(void)
{
    float base, altura, area;
    printf("insira a base e a altura para obter a area\n");
    scanf("%f %f", &base, &altura);
    area = base * altura;
    printf("a area do retangulo eh: %.2f\n", area);

    return 0;
}