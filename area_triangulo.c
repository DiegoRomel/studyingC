#include <stdio.h>
int main(void)
{
    float base, altura, resultado;
    printf("insira base e altura: \n");
    scanf("%f %f", &base, &altura);
    resultado = base * altura;
    printf("resultado: %.2f", resultado);
    return 0;
}